n=int(input("Enter elements of Number:- "))
d={x:input("Enter the element:- ") for x in range(1,n+1)}
print(sorted(d.values()))

