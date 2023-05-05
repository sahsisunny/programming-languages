"""
t=input("Enter the Element of Tuple 1:- ")
l1=t.split(",")
t1=tuple(l1)
tt=input("Enter the Element of Tuple 2:- ")
l2=tt.split(",")
t2=tuple(l2)
"""

t1=tuple([eval(x) for x in input("Enter the Element of Tuple 1:- ").split(',')])
t2=tuple([eval(x) for x in input("Enter the Element of Tuple 1:- ").split(',')])

if t1==t2:
    print("The elements of both tuple is same and same order")
else:
    print("The elements of both tuple is not same and same order")
