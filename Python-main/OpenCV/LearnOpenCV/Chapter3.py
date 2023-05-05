# #########~~~~~~~CROP AND RESIZE IMAGE~~~~~~~######
import cv2

img = cv2.imread('Resources/images/lambo.png')
print(img.shape)

imgReaize = cv2.resize(img, (500, 250))  # cv2.resize(VeriableName, (Width, Height))
print(imgReaize.shape)

imgCropped = img[0:200, 200:500]

cv2.imshow("Original Image", img)
cv2.imshow("Resize Image", imgReaize)
cv2.imshow("Cropped Image", imgCropped)

cv2.waitKey(0)
