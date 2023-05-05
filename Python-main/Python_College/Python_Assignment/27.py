class Book:
    def __init__(self):
        self.title = ""
        self.price = 0
        self.author = ""
        self.publisher = ""

    def get(self):
        times = int(input("How many book do you want to enter: "))
        for i in range(times):
            self.title = input("Enter book title : ")
            self.author = input("Enter book author : ")
            self.publisher = input("Enter book publisher : ")
            self.price = float(input("Enter book price : "))
            value = input("Do you want to update the price of book?(say yes to update):")
            if value == "yes":
                self.changePrice()
                self.show()

    def show(self):
        print("******************************")
        print(f" TITLE\t\t: {self.title}")
        print(f" AUTHOR\t\t: {self.author}")
        print(f" PUBLISHER\t: {self.publisher}")
        print(f" PRICE\t\t: {self.price}")
        print("******************************")

    def changePrice(self):
        self.price = float(input("Enter new price : "))


book = Book()
book.get()
book.show()
