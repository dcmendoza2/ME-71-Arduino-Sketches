import cv2
from matplotlib import pyplot as plt

img = cv2.imread('image.jpg')
image = cv2.GaussianBlur(cv2.cvtColor(img, cv2.COLOR_BGR2GRAY), (5,5),0)
image_laplacian = cv2.Laplacian(image, cv2.CV_64F, ksize= 31)
image_canny = cv2.Canny(image,100,200)
image_sobely = cv2.Sobel(image, cv2.CV_64F,0,1,ksize= 31)
image_sobelx = cv2.Sobel(image, cv2.CV_64F,1,0,ksize= 31)

plt.subplot(2,3,1), plt.imshow(img)
plt.title('Original'), plt.xticks([]), plt.yticks([])
plt.subplot(2,3,2), plt.imshow(image_laplacian, cmap= 'gray')
plt.title('Laplacian'), plt.xticks([]), plt.yticks([])
plt.subplot(2,3,3), plt.imshow(image_canny, cmap= 'gray')
plt.title('Canny'), plt.xticks([]), plt.yticks([])

plt.subplot(2,3,4), plt.imshow(image_sobely, cmap= 'gray')
plt.title('Sobel Y'), plt.xticks([]), plt.yticks([])
plt.subplot(2,3,5), plt.imshow(image_sobelx, cmap= 'gray')
plt.title('Sobel X'), plt.xticks([]), plt.yticks([])

plt.subplot(2,3,6), plt.imshow(cv2.add(image_sobely,image_sobelx), cmap='gray')
plt.title('Sobel'), plt.xticks([]), plt.yticks([])


plt.show()