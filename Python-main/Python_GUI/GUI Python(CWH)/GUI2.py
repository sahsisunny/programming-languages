from tkinter import *

root = Tk()
root.geometry("1000x600")
root.title("My GUI with xPro")

'''
Important Label Options
text-adds the text
bd=Background
fg=Foreground
font=Sets the Font
1. font=("comicsansms",15,"bold")
2. font="comicsansms 15 bold"
padx=x Padding
pady=y Padding
relief=Border Styling -> SUNKEN, RAISED, GROOVE, RIDGE
'''
title_label = Label(text="""
Featured articles are considered to be some of the best articles \n
Wikipedia has to offer, as determined by Wikipedia's editors. \n
They are used by editors as examples for writing other articles. \n
Desktop Site" in your browser's menu to see this line \n
(do a search to find out how). Additionally, if the current article\n
is featured in another language, a star will appear next to the \n
corresponding entry in the Languages list in the sidebar.""",
                    bg="red",
                    fg="white",
                    padx=25,
                    pady=25,
                    font=("comicsansms", 15, "bold"),
                    borderwidth=3,
                    relief=SUNKEN)
"""
Important pack options
anchor=nw|ne|se|sw
side=TOP|BOTTOM|LEFT|RIGHT
fill
padx
pady
"""
title_label.pack(side=TOP, anchor="sw", fill=X, padx=25, pady=25)
root.mainloop()
