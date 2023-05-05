# create a gui window which takes as input wdith and height and upon clicking apply, it should be able
# to change its size accordingly.
from tkinter import *


def update():
    print("Updating GUI.........")
    root.geometry(f"{width.get()}x{height.get()}")


root = Tk()
root.title("Windows Resizer")
root.geometry("250x150")

width = StringVar()
height = StringVar()

Label(root, text="Windows Resizer", font="comicsansms 15 bold", pady=10).grid(row=0, column=3)

w = Label(root, text="Width", font="comicsansms 10 bold").grid(row=2, column=2)
h = Label(root, text="Height", font="comicsansms 10 bold").grid(row=3, column=2)

Entry(root, textvariable=width).grid(row=2, column=3)
Entry(root, textvariable=height).grid(row=3, column=3)

Button(root, text="Apply", command=update).grid(row=4, column=3)

root.mainloop()
