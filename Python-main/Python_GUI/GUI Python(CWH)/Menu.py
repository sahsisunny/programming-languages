from tkinter import *


def fileFun():
    print("File Command")


root = Tk()
root.title("Menu Programs")
root.geometry("500x250")

"""mymenu=Menu(root)
mymenu.add_command(label="File", command=fileFun)
mymenu.add_command(label="Exit", command=quit())
root.config(menu=mymenu)"""

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

root.mainloop()
