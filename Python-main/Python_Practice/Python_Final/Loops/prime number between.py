start = int(input("Enter the starting number: "))
end = int(input("Enter the ending number: "))
print("Prime Number is :", end=" ")
for num in range(start, end + 1):
    for i in range(2, num):
        if num % i == 0:
            # print(f"{num} is not prime")
            break
    else:

        print(f"{num}", end=" ")
