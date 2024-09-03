# Input is always taken in the form of a string
a=input("Input first number:")
b=input("Input second number:")

# Both a and b are treated here as strings therefore the below statement will print the concatenate them
print(a+b)

# To print the actual sum, we have to use type conversion
print("Sum of a and b is:",int(a)+int(b))

""" To avoid type conversion there, we can directly input the number as int rather than string
number=int(input("Number will be converted to int as soon as inputted"))
"""

c=int(input("Enter number:"))
print(c)