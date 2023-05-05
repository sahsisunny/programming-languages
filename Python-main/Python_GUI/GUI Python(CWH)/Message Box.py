import tkinter.messagebox as tmsg
from tkinter import *


def fileFun():
    print("File Command")


def heloFun():
    a = tmsg.showinfo("Help", "xPro will help you with this GUI!!")


def rateUs():
    value = tmsg.askquestion("Was your experience Good?", "Was your experience Good?")
    if value == "yes":
        msg = "Great. Rate us on App Store please"
    else:
        msg = "Tell us what went wrong ? , we will contact you soon!"
    tmsg.showinfo("Experience", msg)


root = Tk()
root.title("Message Box")
root.geometry("500x250")

mainMenu = Menu(root)

# File Menu
m1 = Menu(mainMenu, tearoff=0)  # Disable the "-------" options in menu bar
m1.add_command(label="New File", command=fileFun)
m1.add_command(label="Save", command=fileFun)
m1.add_command(label="Save As", command=fileFun)
m1.add_separator()
m1.add_command(label="Print", command=fileFun)
m1.add_command(label="Exit", command=quit)
mainMenu.add_cascade(label="File", menu=m1)
root.config(menu=mainMenu)

# Edit Menu
m2 = Menu(mainMenu, tearoff=0)  # Disable the "-------" options in menu bar
m2.add_command(label="Copy", command=fileFun)
m2.add_command(label="Cut", command=fileFun)
m2.add_command(label="Find", command=fileFun)
m2.add_command(label="Replace", command=fileFun)
mainMenu.add_cascade(label="Edit", menu=m2)
root.config(menu=mainMenu)

# Help Menu
m3 = Menu(mainMenu, tearoff=0)  # Disable the "-------" options in menu bar
m3.add_command(label="Help", command=heloFun)
m3.add_command(label="About", command=fileFun)
m3.add_command(label="Check Updates", command=fileFun)
m3.add_command(label="Rate Us", command=rateUs)
mainMenu.add_cascade(label="Help", menu=m3)
root.config(menu=mainMenu)

root.mainloop()
