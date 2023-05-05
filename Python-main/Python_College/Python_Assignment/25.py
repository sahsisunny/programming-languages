# Assignment 25
class Employee:
    def __init__(self):
        self.li = []
        self.sa = []

    def show(self):
        self.sor()
        print("Sorting according to their salary")
        print(self.li)
        print("Sorting according to their name")
        self.li.sort()
        print(self.li)

    def get(self):
        a = int(input("Enter no of input.."))
        for i in range(a):
            self.li.append(input("Enter Employee name :"))
        for i in range(a):
            self.sa.append(int(input("Enter your salary :")))

    def sor(self):
        end = len(self.li)
        for i in range(end):
            for j in range(i + 1, end):
                if self.sa[i] < self.sa[j]:
                    self.sa[i], self.sa[j] = self.sa[j], self.sa[i]
                    self.li[i], self.li[j] = self.li[j], self.li[i]


E = Employee()
E.get()
E.show()
