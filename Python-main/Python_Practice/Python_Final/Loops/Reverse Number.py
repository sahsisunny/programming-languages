num = int(input("Enter the number: "))
rev = 0
while num != 0:
    r = num % 10
    rev = rev * 10 + r
    num //= 10
print(rev)
