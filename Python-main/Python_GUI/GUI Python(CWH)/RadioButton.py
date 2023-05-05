import tkinter.messagebox as tmsg
from tkinter import *


def order():
    tmsg.showinfo("Order Received", f"We have received your order for {var.get()}. thanks for odering")


root = Tk()
root.title("Radio Button")
root.geometry("500x300")

var = StringVar()
var.set("")
Label(root, text="What would you like to have Sir?", font="lucida 19 bold", justify=LEFT, padx=14, pady=10).pack()

radio = Radiobutton(root, text="Dosa", padx=14, variable=var, value="Dosa").pack(anchor="w")
radio = Radiobutton(root, text="Samosa", padx=14, variable=var, value="Samosa").pack(anchor="w")
radio = Radiobutton(root, text="Idly", padx=14, variable=var, value="Idly").pack(anchor="w")
radio = Radiobutton(root, text="Momo", padx=14, variable=var, value="Momo").pack(anchor="w")

Button(root, text="Order Now", command=order).pack()

root.mainloop()
