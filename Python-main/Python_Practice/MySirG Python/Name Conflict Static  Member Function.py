class Base:
    def __init__(self):
        self.a = 10

    @staticmethod
    def f1():  # Function overloading concept not exist in Python
        print("Static f1")

    def f1(self):
        print("Instance f1")


obj = Base()
obj.f1()
