class Student:
    def __init__(self, rol, nam):
        self.roll = rol
        self.sname = nam
        print("\n Constructor invoked")

    def __del__(self):
        print("\n Destructor invoked")

    def show(self):
        print("Roll :", self.roll)
        print("Name :", self.sname)

    def get(self):
        self.roll = int(input("Enter roll No. "))
        self.sname = input("Enter Name: ")


class Regular(Student):
    def __init__(self, r, n, rvc):
        Student(r, n)
        self.course = rvc
        print("Constructor of derived class invoked")

    def __del__(self):
        print("Destructor of derived class invoked")

    def show(self):
        Student.show(self)
        print("course :", self.course)

    def get(self):
        Student.get(self)
        self.course = input("Enter your course :")


R = Regular(18, "aayush", "bca")
R.show()
