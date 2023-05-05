from tkinter import *

from PIL import Image, ImageTk  # Import pillow module for support jpg image

root = Tk()
# GUI Logic Here!!

# ~~~~~~~~~~~~SIZE~~~~~~~~~~~~
root.geometry("488x600")  # root.geometry("WIDTH x HEIGHT")
# root.minsize(200,100)         #root.minsize("WIDTH , HEIGHT")
# root.maxsize(600,300)         #root.maxsize("WIDTH , HEIGHT")

# ~~~~~~~~~Components~~~~~~~~~~
# photo1 = PhotoImage(file='1.png')      #For .PNG Image
image = Image.open('1.jpg')  # For .JPG image
photo = ImageTk.PhotoImage(image)
lable1 = Label(image=photo)
lable1.pack()

root.mainloop()
