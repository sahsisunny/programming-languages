num1 = int(input("Enter the 1st number: "))
num2 = int(input("Enter the 2nd number: "))


def calculator(op):
    match (op):
        case "+":
            print(f"Addition of {num1} and {num2} is {num1 + num2}"),
        case "-":
            print(f"Subtraction of {num1} and {num2} is {num1 - num2}"),
        case "*":
            print(f"Multiplication of {num1} and {num2} is {num1 * num2}"),
        case "/":
            print(f"Division of {num1} and {num2} is {num1 / num2}"),
        case "%":
            print(f"Reminder of {num1} and {num2} is {num1 % num2}")


op = input("Enter the Operation(ex: +,-,*,/,%): ")
calculator(op)
