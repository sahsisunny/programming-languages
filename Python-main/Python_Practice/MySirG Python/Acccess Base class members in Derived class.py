# 1. Instance member variables of Base class in Derived class
"""
class Base:
    def __init__(self):
        self.a = 10


class Derived(Base):
    def __init__(self):
        super().__init__()

    def f1(self):
        print(self.a)


obj = Derived()
obj.f1()

# 2. Static member variables of Base class in Derived class
class Base:
    x=11
    def __init__(self):
        self.a=10

class Derived(Base):
    def __init__(self):
        super().__init__()
    @staticmethod
    def f1():
        print(Base.x)

Derived.f1()

# 3. Instance member Function of Base class in Derived class
class Base:
    def __init__(self):
        self.a = 10
    def BaseFun(self):
        print("Base Instance Function a = ",self.a)


class Derived(Base):
    def __init__(self):
        super().__init__()

    def f1(self):
        super.BaseFun()


obj = Derived()
obj.f1()
"""


# 4. Static member Function of Base class in Derived class
class Base:
    x = 11

    def __init__(self):
        self.a = 10

    @staticmethod
    def BaseFun():
        print("Base Static Function x= ", Base.x)


class Derived(Base):
    def __init__(self):
        super().__init__()

    def f1(self):
        super().BaseFun()  # All are same
        self.BaseFun()  # All are same
        Base.BaseFun()  # All are same
        Derived.BaseFun()  # All are same


obj = Derived()
obj.f1()
