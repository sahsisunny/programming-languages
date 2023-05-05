def TakingInput(num1, num2):
    num1 = int(input("Enter the 1st Number: "))
    num2 = int(input("Enter the 2nd Number: "))


def Operation(num1, num2, sum):
    sum = num1 + num2


def ShowResult(sum):
    print(f"Sum is {sum}")


num1 = int(input("Enter the 1st Number: "))
num2 = int(input("Enter the 2nd Number: "))
Operation(num1, num2, sum)
ShowResult(sum)
