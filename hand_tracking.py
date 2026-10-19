from pathlib import Path
import time

import cv2
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

            cv2.imshow("Hand tracking - Q to quit", frame)
            if cv2.waitKey(1) & 0xFF == ord("q"):
                break
finally:
    camera.release()
    cv2.destroyAllWindows()