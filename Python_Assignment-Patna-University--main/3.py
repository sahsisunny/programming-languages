N=int(input("Enter the N Number: "))
product=1
for i in range(N):
    if i%2 !=0:
        product*=i
print(product)
