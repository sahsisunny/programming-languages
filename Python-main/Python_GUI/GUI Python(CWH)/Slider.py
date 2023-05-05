import tkinter.messagebox as tmsg
from tkinter import *


def getRupees():
    tmsg.showinfo("Credit Successful", f"We have Credited {myslider2.get()} Repees to your bank account")


root = Tk()
root.title("Slider")
root.geometry("500x250")

Label(root, text="How many Rupees do you want?").pack()

myslider2 = Scale(root, from_=0, to=100, orient=HORIZONTAL, tickinterval=50)
# myslider2.set(5)
myslider2.pack()

Button(root, text="Get Repees", command=getRupees, padx=20, pady=5).pack()
Button(root, text="Exit", command=quit, padx=40, pady=5).pack()

root.mainloop()
