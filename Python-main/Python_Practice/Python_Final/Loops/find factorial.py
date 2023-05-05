nth = int(input("Enter the N number: "))
fact = 1
for i in range(1, nth + 1):
    fact *= i
print(f"Factorial of {nth} is {fact}.")
