a_List = [123, 2, 81, 89.5, 81, 98.2, 999.15, 81]
a_Tuple = (98, 25, 698.3, 25, 64, 158, 25)

# ~~~~~~~~~~~~LIST METHODS~~~~~~~~~~~~~~
print("1. a_list.append(value) method")
print("Before Append : ", a_List)
a_List.append(29.68)
print("After Append : ", a_List)

print("2. a_list.count(value) method")
print("81 Present in List: ", a_List.count(81), "times")

print("3. a_list.extend(List,Tuple) method")
print("Before Extend : ", a_List)
a_List.extend(a_Tuple)
# a_List.extend(a_Dictionary) # If Dictionary in extend in list then only key is append.
print("After Extend : ", a_List)

print("4. a_list.index() method")
print("Lowest index in list that 81 present : ", a_List.index(81))

print("5. a_list.insert(index,value) method")
print("Before Insertion at 5 no. index : ", a_List)
a_List.insert(5, 81)
print("After Insertion at 5 no. index : ", a_List)

print("6. a_list.pop(obj) method")
print("Before pop at 2 no. index : ", a_List)
print("Popping element is : ", a_List.pop(2))
print("After pop at 2 no. index : ", a_List)

print("7. a_list.remove(value) method")
print("Before Remove 81 element from list : ", a_List)
a_List.remove(81)
print("After Remove 81 element from list : ", a_List)

print("8. a_list.reverse() method")
print("Before reverse of List : ", a_List)
a_List.reverse()
print("After reverse of List : ", a_List)

print("9. a_list.sort() method")
print("Before sorted of List : ", a_List)
a_List.sort()
print("After sorted of List : ", a_List)

print("10. New_Variable_Name = a_list.copy() method")
b_List = []
print("Before Copy of List : ", b_List)
b_List = a_List.copy()
print("After Copy of List : ", b_List)

print("11. a_list.clear() method")
print("Before Clear of List : ", a_List)
a_List.clear()
print("After Clear of List : ", a_List)
