# Example of multiple inheritance

class A:  # parent class 1
    def __init__(self):
        print("constructor of A invoked")


class B:  # parent class 2
    def __init__(self):
        super(B, self).__init__()
        print("constructor of B invoked")


class C(B, A):  # derived class
    def __init__(self):
        super(C, self).__init__()
        print("constructor of C invoked")


C()
