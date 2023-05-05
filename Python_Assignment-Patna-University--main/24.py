class Employee:
    def __init__(self, emp_id=0, name="", salary=0):
        self.Employee_ID = emp_id
        self.Name = name
        self.Salary = salary

    def get(self):
        self.Employee_ID = int(input("Enter the Employee ID:-"))
        self.Name = input("Enter the Employee Name:-")
        self.Salary = int(input("Enter the Salary of Employee:-"))

    def show(self):
        print("Employee ID : ", self.Employee_ID)
        print("Employee Name : ", self.Name)
        print("Salary of Employee : ", self.Salary)


s = Employee()
s.get()
s.show()