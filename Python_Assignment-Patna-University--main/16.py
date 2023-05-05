def findLCM(x, y):
    if x > y:
        greater = x
    else:
        greater = y
        while(True):
            if ((greater % x == 0) and (greater % y == 0)):
                findLCM = greater
                break
            greater += 1
    return findLCM
res=findLCM(10,86)
print(res)