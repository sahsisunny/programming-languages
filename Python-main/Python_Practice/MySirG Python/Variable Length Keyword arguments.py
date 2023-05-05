def f1(**k):
    print("Person Information")
    for key, value in k.items():
        print(key, "-", value)


f1(Name="Sunny", Age=21, Marks=148)
