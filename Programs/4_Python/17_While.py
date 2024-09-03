# print 1 to 100
i=1 #Iterator
while i<=100:
    print(i)
    i+=1
print("Ended\n")

# print 100 to 1
i=100 #Iterator
while i>=1:
    print(i)
    i-=1
print("Ended\n")

# table of n
n=int(input("Enter a number:"))
i=1
while i<=10:
    print(n*i)
    i+=1
print("Ended\n")

# print elements of a list using loop
list=[1,4,9,16,25,36,49,64,81,100]
i=0
while i<len(list):
    print(list[i])
    i+=1
print("Ended\n")

# search a number in list
x=int(input("Enter number to search:"))
i=0
while i<len(list):
    if list[i]==x:
        print("Element found at index",i)
        break
    i+=1
if i==len(list):
    print("Not found")