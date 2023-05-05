t=tuple([int(x) for x in input("Enter int value separated by comma(,):- ").split(',')])
frequency={}
for i in t:
    if (i in frequency):
        frequency[i]+=1
    else:
        frequency[i]=1

for key, value in frequency.items():
    print(key,"->",value)