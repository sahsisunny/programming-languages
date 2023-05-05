# example  of single inheritance
class Student:  # parent class
    def __init__(self, rol, nam):
        self.roll = rol
        self.sname = nam
        print("\nconstructor of Student class invoke")

    def __del__(self):
        print("\nDestructor of Student class invoke")

    def show(self):
        print("Roll:", self.roll)
        print("Name:", self.sname)

    def get(self):
        self.roll = int(input("Enter roll:"))
        self.sname = input("Enter name")


class Regular(Student):  # child class
    def __init__(self, r, n, rvc):  # constructor
        super().__init__(r, n)
        self.course = rvc
        print("constructor of Regualar class invoke")

    def __del__(self):  # destructor
        super().__del__()
        print("Destructor of Regular class invoke")

    def show(self):
        super().show()
        print("course:", self.course)

    def get(self):
        super().get()
        self.course = input("Enter your course:")


class Vocational(Regular):
    def __init__(self, r, n, rvc, sem):
        super().__init__(r, n, rvc)
        self.semester = sem
        print("constructor of vocational class invoke")

    def __del__(self):  # destructor
        super().__del__()
        print("Destructor of vocational class invoke")

    def show(self):
        super().show()
        print("semester:", self.semester)

    def get(self):
        super().get()
        self.semester = input("Enter your semester:")


# main code begins
v = Vocational(24, "Rajveer", "bca", "sem 2")
v.show()
