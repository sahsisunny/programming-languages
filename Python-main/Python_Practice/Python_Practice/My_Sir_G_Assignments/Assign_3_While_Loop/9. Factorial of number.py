num = int(input("Enter the N number: "))
i = 1
fact = 1
while i <= num:
    fact *= i
    i += 1
print(f"Factorial is {fact}.")
