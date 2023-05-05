class Base:

    def __init__(self):
        self.a = 10

    @staticmethod
    def show():
        print("Base a", self.a)


class Derived(Base):

    def __init__(self):
        Base.__init__(self)
        self.a = 20

    @staticmethod
    def show():
        print("Derived a", self.a)
        Base.show()


Derived.show()
