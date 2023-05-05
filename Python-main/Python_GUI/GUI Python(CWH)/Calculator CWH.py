from tkinter import *


def click(event):
    global scvalue
    text = event.widget.cget("text")
    if text == "=":
        if scvalue.get().isdigit():
            value = int(scvalue.get())
        else:
            try:
                value = eval(screen.get())
            except Exception as e:
                print(e)
                value = "Error"
        scvalue.set(value)
        screen.update()
    elif text == "C":
        scvalue.set("")
        screen.update()
    else:
        scvalue.set(scvalue.get() + text)
        screen.update()


root = Tk()
root.geometry("350x540")
root.title("Calculator")
root.resizable(0, 0)
root.wm_iconbitmap("1.ico")

scvalue = StringVar()
scvalue.set("")

screen = Entry(root, textvar=scvalue, font="lucida 35 bold")
screen.pack(fill=X, ipadx=8, pady=5, padx=5)

f = Frame(root, bg="grey")
b = Button(f, text="9", font="lucida 20 bold", padx=15, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)

b = Button(f, text="8", font="lucida 20 bold", padx=15, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)

b = Button(f, text="7", font="lucida 20 bold", padx=15, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)
f.pack()

f = Frame(root, bg="grey")
b = Button(f, text="6", font="lucida 20 bold", padx=15, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)

b = Button(f, text="5", font="lucida 20 bold", padx=15, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)

b = Button(f, text="4", font="lucida 20 bold", padx=15, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)
f.pack()

f = Frame(root, bg="grey")
b = Button(f, text="3", font="lucida 20 bold", padx=15, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)

b = Button(f, text="2", font="lucida 20 bold", padx=15, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)

b = Button(f, text="1", font="lucida 20 bold", padx=15, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)
f.pack()

f = Frame(root, bg="grey")
b = Button(f, text="0", font="lucida 20 bold", padx=16, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)

b = Button(f, text="-", font="lucida 20 bold", padx=18, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)

b = Button(f, text="*", font="lucida 20 bold", padx=16, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)
f.pack()

f = Frame(root, bg="grey")
b = Button(f, text="/", font="lucida 20 bold", padx=17, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)

b = Button(f, text="%", font="lucida 20 bold", padx=12, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)

b = Button(f, text="=", font="lucida 20 bold", padx=14, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)
f.pack()

f = Frame(root, bg="grey")
b = Button(f, text="C", font="lucida 20 bold", padx=13, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)

b = Button(f, text="+", font="lucida 20 bold", padx=15, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)

b = Button(f, text="00", font="lucida 18 bold", padx=10, pady=5)
b.pack(side=LEFT, padx=5, pady=5)
b.bind("<Button-1>", click)
f.pack()

root.mainloop()
