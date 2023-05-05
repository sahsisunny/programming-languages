from tkinter import *

root = Tk()
root.title("Canvas Widget")
canvas_width = 800
canvas_height = 400

root.geometry(f"{canvas_width}x{canvas_height}")

canvas_widget = Canvas(root, width=canvas_width, height=canvas_height)
canvas_widget.pack()
# The Line goes from the point x1,y1 to x2,y2
canvas_widget.create_line(0, 200, 800, 200, fill="red")
canvas_widget.create_line(400, 800, 400, 0, fill="green")

# To create a rectangle specify parameters - coors of top left and coors of bottom right
# canvas_widget.create_rectangle(3,5,700,300, fill="grey")

#
canvas_widget.create_text(250, 250, text="Python")

canvas_widget.create_oval(200, 200, 5, 5)

root.mainloop()
