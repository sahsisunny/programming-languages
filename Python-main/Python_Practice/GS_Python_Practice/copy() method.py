# copy() method

a = array([101, 0, 300, 49, 00, 55])
b = copy(a)
a[1] = 100
a[4] = 400
print(a)
print(b)
print("a", id(a))
print("b", id(b))
