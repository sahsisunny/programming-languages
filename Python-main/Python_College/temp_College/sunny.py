# Example of multiple inheritance

class A:  # parent class 1
    avar = 10

    def __init__(self, v):
        self.avar = v
        print("constructor of A invoked")

    def show(self):
        print("avar = ", self.avar)


class B:  # parent class 2
    bvar = 20

    def __init__(self, v):
        self.bvar = v
        print("constructor of B invoked")

    def show(self):
        print("bvar = ", self.bvar)


class C(B, A):  # derived class
    cvar = 30

    def __init__(self, v):
        self.cvar = v
        print("constructor of C invoked")

    def show(self):
        super(C, self).show()
        super().show()
        print("cvar = ", self.cvar)


c = C(67)
c.show()
