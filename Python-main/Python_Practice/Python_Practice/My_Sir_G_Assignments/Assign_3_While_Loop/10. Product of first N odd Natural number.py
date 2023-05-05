num = int(input("Enter the N number: "))
i = 1
product = 1
while i <= num:
    if i % 2 != 0:
        product *= i
    i += 1
print(f"Product of 1st to {num} odd Number is {product}.")
