# Function is a block of code that perform a specific task 

# add function
def sum(a,b):
    return a+b

print(sum(3,4))

# Default parameters: Assigning a default value to parameter, which is used when no argument is passed
def product(a=1,b=1):
    return a*b

print(product(3,4))  #Same parameters are passed to the function
print(product())     #Since there are no parameters and our function has default values, they will be used & if we didn't give default values, this case will give error

# WAP to print the elements of a list in a single line
def print_list(list):
    for el in list:
        print(el,end=" ")   # By defualt, end is new line that is why every statement is printed in the next line, we can change it according to requirement

print_list([3,2,4,2,95,5,9,7])