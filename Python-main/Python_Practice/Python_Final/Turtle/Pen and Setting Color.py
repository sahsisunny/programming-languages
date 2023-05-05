import turtle

s = turtle.getscreen()
t1 = turtle.Turtle()
t1.penup()  # Pen do not drawing before pen down
t1.goto(200, 100)
t1.pendown()  # Pen starting to draw

t1.pencolor("red")  # Color of Pen

t1.pensize(5)  # Thickness Level of Pen
t1.backward(100)
