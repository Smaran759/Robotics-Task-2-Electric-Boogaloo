import cv2
import numpy as np

cap = cv2.VideoCapture(0)
if not cap.isOpened():
    print("Cannot open camera")
    exit()

lower_blue = np.array([100, 150, 0])
upper_blue = np.array([140, 255, 255])
kernel = np.ones((5,5),np.uint8)


while True:
    ret, frame = cap.read()
    if not ret:
        print("Can't receive frame (stream end?). Exiting ...")
        break

    hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
    mask = cv2.inRange(hsv, lower_blue, upper_blue)
    result = cv2.bitwise_and(frame, frame, mask=mask)
    erosion = cv2.erode(frame,kernel,iterations = 1)
    dilation = cv2.dilate(frame,kernel,iterations = 1)
    opening = cv2.morphologyEx(frame, cv2.MORPH_OPEN, kernel)
    cv2.imshow('Result', result)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break