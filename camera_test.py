import cv2

camera = cv2.VideoCapture(0)

if not camera.isOpened():
    raise RuntimeError("Could not open webcam.")

try:
    while True:
        success, frame = camera.read()
        if not success:
            break

        cv2.imshow("Gesture project - press Q to quit", frame)

        if cv2.waitKey(1) & 0xFF == ord("q"):
            break
finally:
    camera.release()
    cv2.destroyAllWindows()