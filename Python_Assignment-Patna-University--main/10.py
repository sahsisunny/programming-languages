"""
t=input("Enter the Element of:- ")
l1=t.split(",")
t1=tuple(l1)
"""
t1=tuple([eval(x) for x in input("Enter the Element of Tuple 1:- ").split(',')])
i=0
for e in t1:
    if t1.index(e) == i:
        print(e,'---',t1.count(e))
    i+=1