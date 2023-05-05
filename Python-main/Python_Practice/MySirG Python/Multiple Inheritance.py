class Person:
    def __init__(self, n, a):
        self.name = n
        self.age = a


class Student(Person):
    def __init__(self, n, a, r):
        self.roll = r
        Person.__init__(self, n, a)


class Teacher(Person):
    def __init__(self, n, a, s, sub):
        self.salary = s
        self.subject = sub
        Person.__init__(self, n, a)


class BrightStudent(Student, Teacher):
    def __init__(self, n, a, r, s, sub, p):
        self.points = p
        Student.__init__(self, n, a, r)
        Teacher.__init__(self, n, a, s, sub)

    def show(self):
        print("Name: ", self.name)
        print("Age: ", self.age)
        print("Roll No.: ", self.roll)
        print("Salary: ", self.salary)
        print("Subject: ", self.subject)
        print("Points: ", self.points)


obj = BrightStudent("Sunny Sahsi", 21, 7, 895000, "Computer", 9.5)
obj.show()
print(obj.__dict__)
