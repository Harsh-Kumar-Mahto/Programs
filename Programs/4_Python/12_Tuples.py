# Tuples are built in data types that let us create immutable sequences of values
tup=(87,64,33,95,76)
# tup[0]=0  this is not possible as it is immutable, we can only access them and not make chages to them like this
print(tup)
print(tup[0])
print(type(tup))

# Important thing to note is that in case of single valued tuple, we need to add a comma(,) after the element and the same is optional in case of multiple valued tuple
nt=("wow",) #if we dont use comma, this will come a string rather than a tuple
print(nt)

# slicing is same here also as strings and lists

# Tuple Methods
tup=(87,95,33,95,76,)

# 1.Index: returns the index of the first occurence
print(tup.index(95))

# 2.Count: counts the total occurences of the element
print(tup.count(95))