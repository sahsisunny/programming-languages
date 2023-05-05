# Example of multiple inheritance

class A:  # parent class 1
    __avar = 10

    # def __init__(self, v):
    # self.__avar = v
    # print("constructor of A invoked")
    def show(self):
        print("avar = ", self.__avar)


class B:  # parent class 2
    __bvar = 20

    # def __init__(self, v):
    # self.__bvar = v
    # print("constructor of B invoked")
    def show(self):
        print("bvar = ", self.__bvar)


class C(B, A):  # derived class
    cvar = 30

    # def __init__(self, v):
    # self.cvar = v
    # print("constructor of C invoked")

    def show(self):
        # super(C,self).show()
        A().show()
        B().show()
        print("cvar = ", self.cvar)


c = C()
c.show()
