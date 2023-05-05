class Test:
    x = 10  # Static Variable, Visible From outside the class
    __h = 20  # Static Hidden Variable

    def __init__(self):
        self.__a = 100  # Private Instance Variable

    @staticmethod
    def f1():
        print(Test.__h)


Test.f1()
print("Outside the Class __h= ", Test._Test__h)
print(Test.__dict__)
