# ########~~~~~~~~IMAGE~~~~~~~~###############################
import cv2  # Import OpenCV-Python package

# READ
img = cv2.imread(
    'Resources/images/lena.png')  # Variable_Name=cv2.imread('Path of Image')  it is used to read the image.

# DISPLAYq
cv2.imshow("Output", img)  # cv2.imshow("Windows Title/Name", Which is show)
cv2.waitKey(0)  # cv2.waitKey(Time in MilliSecond and zero means infinite)

# ########~~~~~~~~VIDEO~~~~~~~~#################################
import cv2  # Import OpenCV-Python package

cap = cv2.VideoCapture('Resources/videos/testVideo.mp4')
while True:
    success, vid = cap.read()  # Read the Video
    vid = cv2.resize(vid, (640, 480))  # Resize the Video frame
    cv2.imshow('Video', vid)  # Show the Video
    if cv2.waitKeyEx(1) & 0xFF == ord('q'):  # Taking input from user to quit the running video
        break

# ########~~~~~~~~WebCam~~~~~~~~###################################
import cv2  # Import OpenCV-Python package

cap = cv2.VideoCapture(0)  # Read from WebCam

while True:
    success, vid = cap.read()  # Read the Video
    vid = cv2.resize(vid, (640, 480))  # Resize the Video frame
    cv2.imshow('Video', vid)  # Show the Video
    if cv2.waitKeyEx(1) & 0xFF == ord('q'):  # Taking input from user to quit the running video
        break
