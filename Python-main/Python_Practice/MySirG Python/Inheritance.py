class Person:
    def __init__(self, n, a):
        self.name = n
        self.age = a

    def showName(self):
        print("Name: ", self.name)

    def showAge(self):
        print("Age:", self.age)


class Student(Person):
    def __init__(self, r):
        self.roll = r
        # super().__init__("Sunny Sahsi", 21)   `` #Method 1
        Person.__init__(self, "Sunny Sahsi", 21)  # Method 2

    def showRoll(self):
        print("Roll No.:", self.roll)


s1 = Student(7)
s1.showName()
s1.showAge()
s1.showRoll()
