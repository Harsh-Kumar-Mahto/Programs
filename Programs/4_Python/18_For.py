# The else can be used after loops, and the statement within the else will only get executed when the loop is completely finished without any break

# For loop in python is used for sequential traversing of data like in string,list, tuple etc
list=[1,2,3,4,5,6]
for i in list:
    print(i)
else:
    print("End")

# finding number in list
list=[1,4,9,16,25,36,49,64,81,100]
x=int(input("Enter number to search:"))
idx=0
for i in list:
    if i==x:
        print("Element found at index:",idx)
        break
    idx+=1
    i+=1
if idx==len(list):
    print("Not found")