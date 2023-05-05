import turtle

s = turtle.getscreen()
t1 = turtle.Turtle()
t1.forward(100)  # t1.fd(distance)
t1.left(45)  # t1.lt(angle)
t1.backward(100)  # t1.bk(distance)
t1.right(45)  # t1.rt(angle)

t2 = turtle.Turtle()
t2.backward(100)  # t1.fd(distance)
t2.right(45)  # t1.lt(angle)
t2.forward(100)  # t1.bk(distance)
t2.left(45)

t1.goto(65, 65)
t2.goto(-65, 65)  # t2.goto(x,y)

t1.home()
t2.home()  # Turtle cursor return to home positions
