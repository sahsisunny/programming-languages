num = int(input("Enter the number: "))
for i in range(2, num):
    if num % i == 0:
        print(f"{num} not Prime")
        break
else:
    print(f"{num} is Prime")