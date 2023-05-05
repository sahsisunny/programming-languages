from tkinter import *

root = Tk()
root.geometry("1000x600")
root.title("Challenge 2")

title_label = Label(text="Ready", bg="red", fg="white", padx=20, pady=20, font=("comicsansms", 15, "bold"),
                    borderwidth=3, relief=SUNKEN)

title_label.pack(side=BOTTOM, anchor="sw", fill=X, padx=25, pady=25)
root.mainloop()
