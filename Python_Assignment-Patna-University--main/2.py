class Students:
    def __init__(self, s1=0, s2=0, s3=0, s4=0, s5=0):
        self.OS = s1
        self.SSAD = s2
        self.Python = s3
        self.Stastistics = s4
        self.EVS = s5

    def get(self):
        self.OS = float(input("Enter the Marks of OS:- "))
        self.SSAD = float(input("Enter the Marks of SSAD:- "))
        self.Python = float(input("Enter the Marks of Python:- "))
        self.Stastistics = float(input("Enter the Marks of Stastistics:- "))
        self.EVS = float(input("Enter the Marks of EVS:- "))

    def process(self):
        total = self.OS + self.SSAD + self.Python + self.Stastistics + self.EVS
        percentage = total / 5
        if total < 150:
            print("FAIL")
            print("Total Marks is = ", total)
            print("Percentage is = ", percentage)
        elif 150 >= total < 225:
            print("PASS")
            print("3rd Division")
            print("Total Marks is = ", total)
            print("Percentage is = ", percentage)
        elif 225 >= total < 300:
            print("PASS")
            print("2nd Division")
            print("Total Marks is = ", total)
            print("Percentage is = ", percentage)
        elif 300 >= total >= 500:
            print("PASS")
            print("1st Division")
            print("Total Marks is = ", total)
            print("Percentage is = ", percentage)
        elif total >= 500:
            print("~~~~~Invalid Marks~~~~~")
            print("Marks will be less than 500")


s = Students()
s.get()
s.process()
