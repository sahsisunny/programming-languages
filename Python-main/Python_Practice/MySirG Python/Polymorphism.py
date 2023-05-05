# Poly=Many
# Morph=Forms
class A:
    def fun(self):
        print("Class A")


class B:
    def fun(self):
        print("Class B")


obj = A()
obj.fun()
obj = B()
obj.fun()
