num1 = int(input("Enter the 1st Number: "))
num2 = int(input("Enter the 2nd Number: "))
num3 = int(input("Enter the 3rd Number: "))
if num1 < num2 and num1 < num3:
    print(f"{num1} is Largest Number")
elif num2 < num1 and num2 < num3:
    print(f"{num2} is Largest Number")
else:
    print(f"{num3} is Largest Number")
