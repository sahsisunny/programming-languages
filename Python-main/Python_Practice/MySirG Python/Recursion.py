def Sum(n):
    if n == 1:
        return 1
    else:
        return n + Sum(n - 1)


res = Sum(30)
print(res)
