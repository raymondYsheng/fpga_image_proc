from pathlib import Path
import time

import cv2
import csv
from datetime import datetime
import mediapipe as mp
from mediapipe.tasks import python
from mediapipe.tasks.python import vision

model_path = Path(__file__).with_name("hand_landmarker.task")

options = vision.HandLandmarkerOptions(
    base_options=python.BaseOptions(model_asset_path=str(model_path)),
    running_mode=vision.RunningMode.VIDEO,
    num_hands=1,
)

camera = cv2.VideoCapture(0)
if not camera.isOpened():
    raise RuntimeError("Could not open webcam.")

session = datetime.now().strftime("%Y%m%d_%H%M%S")
data_path = Path(__file__).with_name(f"gestures_{session}.csv")

data_file = data_path.open("w", newline="")
writer = csv.writer(data_file)
writer.writerow(
    ["label"]
    + [f"{axis}{i}" for i in range(21) for axis in ("x", "y", "z")]
)

labels = {
    ord("1"): "open_hand",
    ord("2"): "fist",
    ord("3"): "pointing",
    ord("4"): "other",
}

active_label = None
last_saved = 0
counts = {label: 0 for label in labels.values()}

last_timestamp = -1

try:
    with vision.HandLandmarker.create_from_options(options) as detector:
        while True:
            success, frame = camera.read()
            if not success:
                break

            # Mirror the image so movement feels natural.
            frame = cv2.flip(frame, 1)

            # OpenCV uses BGR; the model expects RGB.
            rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
            image = mp.Image(image_format=mp.ImageFormat.SRGB, data=rgb)

            # Each frame needs an increasing timestamp.
            timestamp = max(
                time.monotonic_ns() // 1_000_000,
                last_timestamp + 1,
            )
            last_timestamp = timestamp
            result = detector.detect_for_video(image, timestamp)

            height, width = frame.shape[:2]

            for hand in result.hand_landmarks:
                for index, point in enumerate(hand):
                    x = int(point.x * width)
                    y = int(point.y * height)

                    cv2.circle(frame, (x, y), 5, (0, 255, 0), -1)
                    cv2.putText(
                        frame, str(index), (x + 6, y - 6),
                        cv2.FONT_HERSHEY_SIMPLEX,
                        0.4, (255, 255, 255), 1,
                    )

            status = "Hand detected" if result.hand_landmarks else "No hand"
            cv2.putText(
                frame, status, (20, 35),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.8, (0, 255, 255), 2,
            )

                        # Save at most five samples per second.
            if (
                active_label is not None
                and result.hand_landmarks
                and timestamp - last_saved >= 200
            ):
                hand = result.hand_landmarks[0]
                coordinates = [
                    value
                    for point in hand
                    for value in (point.x, point.y, point.z)
                ]
                writer.writerow([active_label] + coordinates)
                data_file.flush()
                counts[active_label] += 1
                last_saved = timestamp

            recording_text = (
                f"Recording: {active_label} ({counts[active_label]})"
                if active_label
                else "Paused"
            )
            cv2.putText(
                frame, recording_text, (20, 70),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.6, (0, 255, 255), 2,
            )

            cv2.imshow("Hand tracking - Q to quit", frame)
            key = cv2.waitKey(1) & 0xFF

            if key == ord("q"):
                break
            elif key == ord(" "):
                active_label = None
            elif key in labels:
                active_label = labels[key]
finally:
    camera.release()
    cv2.destroyAllWindows()
    data_file.close()
    print(f"Saved data to: {data_path}")
    print(f"Samples per gesture: {counts}")