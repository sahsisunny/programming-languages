num1 = int(input("Enter the Number 1 : "))
num2 = int(input("Enter the Number 2 : "))
num3 = int(input("Enter the Number 3  : "))

if num1 > num2:
    if num1 > num3:
        print(f"{num1} is Greatest Number")
    elif num3 > num2:
        print(f"{num3} is Greatest Number")
else:
    print(f"{num2} is Greatest Number")
