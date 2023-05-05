from tkinter import *

root = Tk()
root.title("ScrollBar")
root.geometry("500x500")

# For Connecting a scrollbar to a widget
# 1. widget(yscrollcommand=scrollbar.set)
# 2. scrollbar.config(command=widget.yview)g

scrollbar = Scrollbar(root)
scrollbar.pack(side=RIGHT, fill="both")

text = Text(root, yscrollcommand=scrollbar.set)
text.pack(fill=BOTH, padx=5, pady=10)

scrollbar.config(command=text.yview)

root.mainloop()
