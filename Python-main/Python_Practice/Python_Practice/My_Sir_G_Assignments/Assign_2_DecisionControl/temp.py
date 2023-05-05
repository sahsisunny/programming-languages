lis = []
num = int(input("Enter the number of element: "))
for i in range(1, num + 1):
    lis.append(input(f"Enter the Word {i}: "))

lis.sort()
print(lis)
