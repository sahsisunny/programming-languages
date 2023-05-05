a_List = [123, 2, 81, 89.5, 81, 98.2, 999.15, 81]
a_Tuple = (98, 25, 698.3, 25, 64, 158, 25)
a_Dictionary = {1: "Sunny", 2: "Deepak", 3: "Baba"}
aa_Dictionary = {4: "Prince"}
a_String = "Hello Universe!! i am xPro from Earth"

# ~~~~~~~~~~~~DICTIONARY METHODS~~~~~~~~~~~~~~


print("1. VariableName = a_Dictionary.copy()")
c_Dictionary = a_Dictionary.copy()
print("Dictionary copy to another Variable : ", c_Dictionary)

print("2. VariableName= a_Dictionary.fromkeys(a_List(Keys),a_Tuple(Values))")
print("Before : ", a_Dictionary)
c_Dictionary = a_Dictionary.fromkeys(a_List, a_Tuple)
print("After : ", c_Dictionary)

print("3.a_Dictionary.get(key) ")
print("Returned Value is : ", a_Dictionary.get(2))

print("4. Return_Tuple_Variable_Name=a_Dictionary.items()")
r_Tuple = a_Dictionary.items()
print("Returned Tuple is : ", r_Tuple)

print("5. VariableName = a_Dictionary.keys()")
k = a_Dictionary.keys()
print("Type of return keys variable is : ", type(k))
print("Returned list of Keys is : ", k)

print("6. r = a_Dictionary.setdefault(1)")
r = a_Dictionary.setdefault(1)
print("Returned key is : ", r)

print("Before Updated : ", a_Dictionary)
a_Dictionary.update(aa_Dictionary)
print("After Updated : ", a_Dictionary)

print("1. a_Dictionary.clear()")
print("Before Clear : ", a_Dictionary)
a_Dictionary.clear()
print("After Clear : ", a_Dictionary)

print(a_Dictionary.values())

# a_Dictionary.has_key(1)
