class Base:
    def __init__(self):
        self.a = 10

    def showBase(self):
        print("Base a", self.a)


class Derived(Base):
    def __init__(self):
        Base.__init__(self)
        self.a = 20

    def showDerived(self):
        print("Derived a = ", self.a)


obj = Derived()
obj.showBase()
obj.showDerived()
