from tkinter import *


def hello():
    print("Hello India!")


def name():
    print("My name is xPro")


def education():
    print("BCA 2nd Year")


def address():
    print("i am from Patna")


root = Tk()
root.geometry("500x500")
root.title("Button")
frame = Frame(root, borderwidth=6, bg="grey", relief=SUNKEN)
frame.pack(side=TOP, anchor="nw")
b1 = Button(frame, fg="green", text="Greet", command=hello)
b1.pack(side=LEFT, padx=25)
b2 = Button(frame, fg="red", text="Name", command=name)
b2.pack(side=LEFT, padx=25)
b3 = Button(frame, fg="red", text="Education", command=education)
b3.pack(side=LEFT, padx=25)
b4 = Button(frame, fg="red", text="Address", command=address)
b4.pack(side=LEFT, padx=25)
root.mainloop()
