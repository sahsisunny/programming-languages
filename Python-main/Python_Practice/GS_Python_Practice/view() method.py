# view() method

a = array([101, 0, 300, 49, 00, 55])
b = a.view()
a[1] = 100

print(a)
print(b)
print("a", id(a))
print("b", id(b))
