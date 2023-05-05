# Assignment 17
def BinRev(value):
    a = value
    print("Binary representation of", a, "in reverse order is : ")
    while a != 0:
        ans = a % 2
        a = a // 2
        print(ans, end=" ")


val = int(input("Enter Decimal number :"))
BinRev(val)
