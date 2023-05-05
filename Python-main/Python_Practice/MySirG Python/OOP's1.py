# Class and Objects
class Test:

    def __init__(self, x, y):
        print("init")
        self.a = x  # instance/object variable
        self.b = y  # instance/object variable


t1 = Test(3, 4)
t2 = Test(5, 6)
print(t1.a, t1.b)
print(t2.a, t2.b)
