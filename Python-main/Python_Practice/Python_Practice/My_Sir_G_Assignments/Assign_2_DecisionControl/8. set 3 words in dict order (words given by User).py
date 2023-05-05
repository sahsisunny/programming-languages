lis = []
num = int(input("Enter the number of element: "))
for i in range(1, num + 1):
    lis.append(input(f"Enter the Word {i}: "))
num2 = []
for word in lis:
    num2.append(ord(word[0]))

print(lis)
print(num2)

# lis.sort()
# print(lis)
