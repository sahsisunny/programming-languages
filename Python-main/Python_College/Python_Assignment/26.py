class Account:
    rate_of_interest = 0

    def __init__(self):
        self.balance = 5000
        self.accountNo = 0

    def getData(self):
        self.accountNo = int(input("Enter your account number(hint-79562): "))
        if self.accountNo != 79562:
            print("INVALID A/C Number...")
        else:
            print(
                "..........MENU............\n "
                "1. Show Balance\n "
                "2. Money Withdraw\n "
                "3. Money Deposit\n "
                "4. Show Rate of Interest")
            choice = int(input("Enter your choice :"))
            if choice == 1:
                print(f"Current Balance :{self.balance}")
            elif choice == 2:
                money = float(input("Enter your amount :"))
                self.balance = self.balance - money
                print(f"Current Balance :{self.balance}")
            elif choice == 3:
                money = float(input("Enter your amount :"))
                self.balance = self.balance + money
                print(f"Current Balance :{self.balance}")
            elif choice == 4:
                si = float(input("Enter simple interest :"))
                t = int(input("Enter time(in year) :"))
                Account.rate_of_interest = (si * 100) / (self.balance * t)
                print(f"Rate of Interest {Account.rate_of_interest}%")


account = Account()
account.getData()
