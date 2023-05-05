class Test:
    a = 10  # Static Variable

    def __init__(self):
        self.x = 20  # Instance Variable
        Test.b = 30  # Static Variable

    def f1(m, n):  # Instance Member Functions   # m act as self
        print(n)
        z = 60  # Local Variable

    @staticmethod  # Annotation
    def f2():  # Static Method
        Test.d = 60  # Static Variable

    @classmethod  # Annotation
    def f3(cls):
        cls.e = 16  # Static Variable
        Test.f = 60  # Static Variable


Test.g = 70  # Static Variable
t1 = Test()
t1.f1(5)
t1.f2()
Test.f3()
print(Test.__dict__)
