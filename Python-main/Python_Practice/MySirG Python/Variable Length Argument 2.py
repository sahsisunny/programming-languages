def f1(playername, *points):
    print(playername, end=" ")
    s = 0
    for x in points:
        s = s + x
    print("Total Points = ", s)


f1("Ajay", 10, 11, 13)
f1("Amit", 10, 11, 13, 30, 21)
