num = int(input("Enter the number : "))
for i in range(1, num):
    if (num % i == 0) and (i * i == num):
        print(f"Root of {num} is {i}")
