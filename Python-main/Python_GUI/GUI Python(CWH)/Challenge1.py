# NewsPaper
from tkinter import *

from PIL import Image, ImageTk


def every_100(text):
    finalText = ""
    for i in range(0, len(text)):
        finalText += text[i]
        if i % 180 == 0 and i != 0:
            finalText += "\n"
    return finalText


root = Tk()
root.title("NewsPaper - Apka Nhi Mera Akhbar")
root.geometry("1280x840")
texts = []
photos = []

for i in range(0, 3):
    with open(f"{i + 1}.txt") as f:
        text = f.read()
        texts.append(every_100(text))

    image = Image.open(f"{i + 1}.jpg")
    # TODO: Resize these Image
    image = image.resize((180, 180), Image.ANTIALIAS)
    photos.append(ImageTk.PhotoImage(image))
f0 = Frame(root, width=800, height=70)
Label(f0, text="xPro News", font="lucida 33 bold").pack()
Label(f0, text="April 11,2021", font="lucida 13 bold").pack()
f0.pack()

f1 = Frame(root, width=900, height=200, pady=10)
Label(f1, text=texts[0], padx=22, pady=22).pack(side=LEFT)
Label(f1, image=photos[0], anchor="e").pack(side=LEFT)
f1.pack(anchor="w")

f2 = Frame(root, width=900, height=200, pady=10, padx=10)
Label(f2, text=texts[1], padx=22, pady=22).pack(side=RIGHT)
Label(f2, image=photos[1], anchor="e").pack(side=RIGHT)
f2.pack(anchor="w")

f3 = Frame(root, width=900, height=200, pady=10)
Label(f3, text=texts[2], padx=22, pady=22).pack(side=LEFT)
Label(f3, image=photos[2], anchor="e").pack(side=LEFT)
f3.pack(anchor="w")

root.mainloop()
