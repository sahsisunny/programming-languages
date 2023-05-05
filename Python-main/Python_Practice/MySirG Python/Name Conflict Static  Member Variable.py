class Base:
    x = 11

    def __init__(self):
        self.a = 10
        Base.x = 13


class Derived(Base):
    x = 12

    def __init__(self):
        Base.__init__(self)
        self.a = 20

    def show():
        print(Base.x, Derived.x)


obj = Derived()
print(Base.x)
Derived.show()
