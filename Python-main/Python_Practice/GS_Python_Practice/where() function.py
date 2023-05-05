# where() function

a = array([101, 200, 300, 400, 55])
b = array([100, 20, 30, 40, 500])
c = where(a > b, a, b)
for i in c:
    print(i)
