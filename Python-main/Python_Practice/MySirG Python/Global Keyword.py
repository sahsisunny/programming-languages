y = 10  # Global Variable


def fun():
    global y  # global Keyword
    x = 5  # Local Variable
    print(x)
    print(y)


fun()
print(y)
