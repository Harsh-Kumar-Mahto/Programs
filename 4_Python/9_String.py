# strings can be written in ' '," " and even """ """
# addition of two strings is called concatenation
str1='Hi!'
str2='How are you?'
print(str1+str2)

# In python, 0 based indexing is used in strings
print(str1[0])

# Strings are immutable in python therefore 
# str1[0]='B'  we can't manipulate string indices like this, we can just access them

# Slicing: Accessing part of a string
print(str2[4:7])   # In this representation, starting index i.e 4 is included but ending index i.e 7 is not included
print(str1[:2])  #Here start will be automatically taken as index 0
print(str1[2:])  #Here end will automatically be taken as the last index+1 value

# In python we also have negative indexing but only for slicing
# Assume a string "Harsh", here the negative indexing will be as -5 -4 -3 -2 -1
# The last element has the index -1 and reduces as we move left
name="harsh"
print(name[-3:-1])  # Here also ending is not included

# String Functions:

# 1.Length: returns the length of the string
print(len(name))

# 2.Endswith: returns true if string ends with the substring provided else false
print(name.endswith("sh"))

# 3.Capitalize: 1st character of the string becomes capital
print(name.capitalize())  # Original string here is not changed, it returns a new string with changes
# name=name.capitalize()    To accomodate changes in the actual string we need to store the updated string in it

# 4.Replace: this will replace all the occurences of the old substr with the new one
print(name.replace('h','z')) # Here also original string is not changed

# 5.Find: returns the index of the first occurence of the substr
print(name.find('h'))

# 6.Count: counts the occurences of a substr
print(name.count('h'))

# There are many more