"""
t=input("Enter the Element of 1st 1:- ")
l1=t.split(",")
t1=tuple(l1)
tt=input("Enter the Element of 2nd 2:- ")
l2=tt.split(",")
t2=tuple(l2)
"""

t1=tuple([eval(x) for x in input("Enter the Element of Tuple 1:- ").split(',')])
t2=tuple([eval(x) for x in input("Enter the Element of Tuple 1:- ").split(',')])

res=set(t1).issubset(t2)
print("Is 2nd tuple subset of 1st ? :",res)