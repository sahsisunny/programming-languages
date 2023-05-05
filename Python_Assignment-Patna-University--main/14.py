n=int(input("Enter the Number of Students :- "))
d={x:input("Enter the Student names:- ") for x in range(1,n+1)}

print("Roll No.\t  Name")
print("---------   --------")
for k in d:
    print("\t",k,"\t  ",d.get(k))