# A built-in data type that stores set of values
# It is somewhat similar to arrays of other laguages but it can store elements of different types
# It is also similar to strings based on indexing and positioning of elements and even slicing but the difference is of mutability

marks=[87,64,33,95,76]
print(marks)
print(type(marks))  #type is list

values=["string",5,'c',78.09]
print(values)

print(values[2])

# Lists are mutable in as we can manipulate data also by accessing the index
values[0]="anything"
print(values)

# Same as the strings, slicing is also possible in lists
# All the rules of slicing in strings are applicable here

# List Methods
list=[2,3,1]

# 1.Length: returns the number of elements in the list
print(len(list)) 

# 2.Append: adds one element at the end of the list.Make changes directly in the original list and does not return any value
# print(list.append(4)) this returns None
list.append(4)
print(list)

# 3.Sort: Make changes directly in the original list and does not return any value

# a.sort in ascending order.
list.sort()
print(list)
# b.sort in descending order.
list.sort(reverse=True)

# 4.Reverse: as the make suggests, it reverses the original list
list.reverse()
print(list)

# 5.Insert: used to add an element at a particular index and rest are right shifted
# fist parameter is index and second one is the actual element to be added
list.insert(0,0)
print(list)

# 6.Remove: removes the first occurence of element
list=[2,1,3,1]
list.remove(1)
print(list)

# 7.Pop: removes element at a particular index
list.pop(0)
print(list)

# Here also there are several more methods