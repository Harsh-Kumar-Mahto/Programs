# ask user to enter name of their 3 fav movies and store them in list
list=[]
list.append(input("Enter first movie:"))
list.append(input("Enter second movie:"))
list.append(input("Enter third movie:"))
print(list)

# check if a list contains a palindrome of elements
list1=[1,2,3,2,1]
list2=list1.copy()
list2.reverse()
if list1==list2:
    print("Palindrome present")
else:
    print("No palindrome")
