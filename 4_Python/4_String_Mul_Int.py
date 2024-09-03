# In python string and int can be operated together, in this case string is print the number of time as that of int
print("Hi"*5)

a,b="2",3
txt="@"
print((a+txt)*b)  # First both the string will be concatenated and then print int number of times


# Operators
num1,num2=6,4
print(num1+num2)
print(num1-num2)
print(num1*num2)
print(num1/num2)

# % is the remainder operator
print(num1%num2)
print(-num1%num2)
# When denominator is negative, % operator also gives negative remainder unless remainder is 0
print(-num1%-num2)
print(num1%-num2)

# "//" this operator actually works as floor function as it converts float value to its closest int less than or equal to number but then print it in float format
print(num1//num2)  # "//" this operator converts the float value after division into int value
print(5//2.0)  #In this case "//" will print the int value after division but in the format of float
print(-12//5)

# ** is used as raised to the power
print(5**2)

"""Multiline comment 
is written as this"""