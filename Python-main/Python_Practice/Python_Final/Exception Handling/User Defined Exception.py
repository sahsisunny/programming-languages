class BalanceExceptionError(Exception):
    pass


def checkBalance():
    money = 10000
    withdraw = 9000
    try:
        balance = money - withdraw
        if balance < 2000:
            raise BalanceExceptionError("Insufficient Balance")
        print(balance)
    except BalanceExceptionError as be:
        print(be)


checkBalance()
