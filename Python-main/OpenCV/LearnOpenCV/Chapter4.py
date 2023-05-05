# #######~~~~~~~SHAPE~~~~~~~################
import cv2
import numpy as np

img = np.zeros((512, 512, 3), np.uint8)
img[200:256, 200:256] = 255, 0, 0

# LINE
cv2.line(img, (0, 0), (img.shape[1], img.shape[0]), (0, 255, 0), 3)

# RECTANGLE
cv2.rectangle(img, (0, 0), (250, 350), (0, 0, 255), cv2.FILLED)  # Filled Rectangle
cv2.rectangle(img, (0, 0), (250, 350), (0, 0, 255), 5)  # Empty Rectangle

# CIRCLE
cv2.circle(img, (500, 40), 30, (255, 255, 0), cv2.FILLED)
cv2.circle(img, (400, 50), 30, (255, 255, 0), 5)

# PUT TEXT ON IMAGE
cv2.putText(img, "ROBOT  ", (300, 100), cv2.FONT_HERSHEY_COMPLEX, 1, (0, 150, 0), 2)

cv2.imshow("Image", img)

cv2.waitKey(0)
