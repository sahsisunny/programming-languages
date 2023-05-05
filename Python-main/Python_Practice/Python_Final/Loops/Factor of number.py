num = int(input("Enter the number: "))
print(f"Factors of number {num} is:", end=" ")
for i in range(1, num + 1):
    if num % i == 0:
        print(f"{i}", end=" ")
