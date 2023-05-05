from tkinter import *

root = Tk()
root.geometry("500x350")
root.title("Frame")
f1 = Frame(root, bg="red", borderwidth=6, relief=SUNKEN)
f1.pack(side=LEFT, fill=Y)
f2 = Frame(root, borderwidth=9, bg="red", relief=SUNKEN)
f2.pack(side=TOP, fill=X)
l1 = Label(f1, text="Project tkinter - Pycharm", font="Helvetica 10 bold", fg="yellow", bg="red")
l1.pack(pady=150)
l2 = Label(f2, text="Welcome to Sublime Text Editor", font="Helvetica 16 bold", fg="yellow", bg="red")
l2.pack()

root.mainloop()
