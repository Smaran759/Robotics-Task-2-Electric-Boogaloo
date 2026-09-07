import cv2

aruco_dict = cv2.aruco.getPredefinedDictionary(cv2.aruco.DICT_4X4_50)
parameters = cv2.aruco.DetectorParameters()
detector = cv2.aruco.ArucoDetector(aruco_dict, parameters)

cap = cv2.VideoCapture(0)
if not cap.isOpened():
    print("Cannot open camera")
    exit()

while True:
    ret, frame = cap.read()
    if not ret:
        print("Can't receive frame (stream end?). Exiting ...")
        break

    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    corners, ids, rejected = detector.detectMarkers(gray)

    if ids is not None:
        cv2.aruco.drawDetectedMarkers(frame, corners, ids)

        for i, marker_id in enumerate(ids):
            c = corners[i][0]  
            center_x = int(c[:, 0].mean())
            center_y = int(c[:, 1].mean())

            cv2.circle(frame, (center_x, center_y), 4, (0, 0, 255), -1)
            cv2.putText(frame, f"ID:{marker_id}", (center_x, center_y - 15),
            cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 255, 0), 2)

            print(f"Marker ID: {marker_id}, Center: ({center_x}, {center_y})")

    cv2.imshow("ArUco Detection", frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

