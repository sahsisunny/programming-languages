from tkinter import *  # import the module of GUI

root = Tk()  # create screen

root.title("Welcome User")  # set title of frame

root.geometry("500x300")  # set size or resolution of frame

root.wm_minsize(width=200, height=300)  # set the minimum size of windows
root.wm_maxsize(width=800, height=600)  # set the maximum size of windows

b1 = Button(root, text='Button')
l1 = Label(root, text="Label")
e1 = Entry(root)
cb1 = Checkbutton(root, text="Check Button")
r1 = Radiobutton(root, text="Radio Button")
t1 = Text(root)

b1.pack()
l1.pack()
e1.pack()
cb1.pack()
r1.pack()
t1.pack()

root.mainloop()  # calling to mainloop for show frame infinite times
