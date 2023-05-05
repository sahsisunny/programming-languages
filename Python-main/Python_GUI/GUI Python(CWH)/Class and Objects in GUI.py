from tkinter import *


class GUI(Tk):
    def __init__(self):
        super().__init__()
        self.geometry("500x250")
        self.title("Status Bar")

    def status(self):
        self.var = StringVar()
        self.var.set("This is a Status Bar ----->")
        self.statusbar = Label(self, textvar=self.var, relief=SUNKEN, anchor="w")
        self.statusbar.pack(side=BOTTOM, fill=X)

    def click(self):
        print("Button Clicked")

    def createButton(self, inptext):
        Button(text=inptext, command=self.click).pack()


if __name__ == '__main__':
    window = GUI()
    window.status()
    window.createButton("Click Me")
    window.mainloop()
