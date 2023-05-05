num = int(input("Enter the number: "))
i=1
for i in range(2, num+1):
    i = 1
    while num % i == 0:
        i -= 1
        print(f"{num} not Prime")
        break
else:
    print(f"{num} is Prime")

