num = int(input("Enter the N number: "))
i = 1
sum = 0
while i <= num:
    if i % 2 != 0:
        sum += i
    i += 1
print(f"Sum of 1st N Odd natural is {sum}.")
