from tkinter import *

root = Tk()
root.title("ScrollBar")
root.geometry("500x300")

scrollbar = Scrollbar(root)
scrollbar.pack(side=RIGHT, fill="both")

label = Label(root, text="hii", yscrollcommand=scrollbar.set).pack(fill="both", padx=22, pady=20)
scrollbar.config(command=label.yview)

root.mainloop()
