from tkinter import *

i = 0


def add():
    global i
    lbx.insert(ACTIVE, f"{i}")
    i += 1


root = Tk()
root.title("ListBox")
root.geometry("500x300")

lbx = Listbox(root)
lbx.insert(END, "First Item")
lbx.pack()

Button(root, text="Add Item", command=add).pack()

root.mainloop()
