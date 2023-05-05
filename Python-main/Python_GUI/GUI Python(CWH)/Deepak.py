from tkinter import *

from PIL import ImageTk, Image

win = Tk()
win.geometry("500x300")

image = Image.open("1.png")
photo = ImageTk.PhotoImage(image)
Label(image=photo).pack()

win.mainloop()
