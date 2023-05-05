class Book:
    def __init__(self):
        self.title = ""
        self.price = 0
        self.author = ""
        self.publisher = ""
        self.tli = []
        self.pli = []

    def get(self):
        times = int(input("How many book do you want to enter : "))
        for i in range(times):
            self.title = input("Enter book title :")
            self.tli.append(self.title)
            self.author = input("Enter book author :")
            self.publisher = input("Enter book publisher :")
            self.price = float(input("Enter book price :"))
            self.pli.append(self.price)
            self.show()

    def show(self):
        print("******************************")
        print(f" TITLE\t\t: {self.title}")
        print(f" AUTHOR\t\t: {self.author}")
        print(f" PUBLISHER\t: {self.publisher}")
        print(f" PRICE\t\t: {self.price}")
        print("******************************")

    def sorting(self):
        print("Sorting by Price")
        end = len(self.pli)
        for i in range(end):
            for j in range(i + 1, end):
                if self.pli[i] < self.pli[j]:
                    self.pli[i], self.pli[j] = self.pli[j], self.pli[i]
                    self.tli[i], self.tli[j] = self.tli[j], self.tli[i]
            print(self.tli)
            print("Sorting by Title")
            self.tli.sort()
            print(self.tli)


book = Book()
book.get()
book.sorting()
