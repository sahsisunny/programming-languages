from tkinter import *


def getVals():
    print("Username: ", userValue.get())
    print("Password: ", passValue.get())


root = Tk()
root.geometry("250x250")
root.title("Grid Layout")
user = Label(root, text="Username")
passwd = Label(root, text="Password")
user.grid()
passwd.grid(row=1)

# Classes in tkinter
# BooleanVar,DoubleVar, IntVar, StringVar
userValue = StringVar()
passValue = StringVar()
userEntry = Entry(root, textvariable=userValue)
passEntry = Entry(root, textvariable=passValue)
userEntry.grid(row=0, column=1)
passEntry.grid(row=1, column=1)
Button(text="Submit", command=getVals).grid()

root.mainloop()
