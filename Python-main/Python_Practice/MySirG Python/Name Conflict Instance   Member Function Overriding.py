class Base:
    x = 11

    def __init__(self):
        self.a = 10

    def show(self):
        print("Base a", self.a)


class Derived(Base):

    def __init__(self):
        Base.__init__(self)
        self.a = 20

    def show(self):
        print("Derived a", self.a)
        super().show()


obj = Derived()
obj.show()
