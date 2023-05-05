#Method 1
"""
stri = input("Enter the String:- ")
e=input("Enter the Character to Count:- ")
count = 0
for i in stri:
	if i == e:
		count = count + 1
print (f"Count of {e} in Given String is : ",str(count))
"""
#Method 2
stri = input("Enter the String:- ")
out = {x : stri.count(x) for x in set(stri )}
print("Character\t Number")
for k in out:
    print("\t",k,"\t     ",out.get(k))
