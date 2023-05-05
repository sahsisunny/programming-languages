from tkinter import *


def texchar(event):
    t2.insert('1.0', event.char)


# l1.config(text=event.char)

def add():
    # n1 = t1.get('1.0','end')
    # n2 = t2.get('1.0','end')

    n1 = num1.get()
    n2 = num2.get()
    n3 = int(n1) + int(n2)

    # t3.insert(tk.END,n3)
    num3.set(n3)


win = Tk()
win.title("Calculator")
win.geometry("225x90")

num1 = StringVar()
num2 = StringVar()
num3 = StringVar()

l1 = Label(win, fg="blue", text="Enter Number 1 : ").grid(row=1, column=1)
# t1 = tk.Text(win, height=1, width=5).grid(row=1,column=2)
t1 = Entry(win, textvariable=num1)
t1.bind('<Key>', texchar)
t1.grid(row=1, column=2)

l2 = Label(win, fg="blue", text="Enter Number 2 : ").grid(row=2, column=1)
# t2 = tk.Text(win, height=1, width=5).grid(row=2,column=2)
t2 = Entry(win, textvariable=num2).grid(row=2, column=2)

l3 = Label(win, fg="blue", text="Enter Number 3 : ").grid(row=3, column=1)
# t3 = tk.Text(win, height=1, width=5).grid(row=3,column=2)
t3 = Entry(win, textvariable=num3).grid(row=3, column=2)

b1 = Button(win, fg="green", text="Add", command=add).grid(row=4, column=1)
b2 = Button(win, fg="red", text="Exit")

b2.bind('<Button-1>', quit)
b2.grid(row=4, column=2)

win.mainloop()
