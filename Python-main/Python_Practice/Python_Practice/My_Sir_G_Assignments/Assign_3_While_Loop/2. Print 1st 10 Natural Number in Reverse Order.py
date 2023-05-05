print("Natural Number is :", end=" ")
i = 1
lis = []
while i <= 10:
    print(i, end=" ")
    lis.append(i)
    i += 1
for i in range(len(lis)):
    print(lis[0:-i])
