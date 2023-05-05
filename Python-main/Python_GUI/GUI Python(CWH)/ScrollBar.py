from tkinter import *

root = Tk()
root.title("ScrollBar")
root.geometry("500x300")

# For Connecting a scrollbar to a widget
# 1. widget(yscrollcommand=scrollbar.set)
# 2. scrollbar.config(command=widget.yview)

scrollbar = Scrollbar(root)
scrollbar.pack(side=RIGHT, fill="both")

lbx = Listbox(root, yscrollcommand=scrollbar.set)
for i in range(344):
    lbx.insert(END, f"Item {i}")
lbx.pack(fill="both", padx=22, pady=20)

scrollbar.config(command=lbx.yview)

root.mainloop()
