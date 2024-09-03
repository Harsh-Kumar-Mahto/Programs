import string
import random

chars=string.ascii_letters + string.digits + string.punctuation
print(chars)

l=int(input("Enter length of the password to be generated: "))
print("Your random password is: ",end="")
# for i in range(l):
#     print(random.choice(chars),end="")
password="".join([random.choice(chars) for i in range(l)])   # anything written in "" before join is used as separator and all the list elements produced by the inside loop is converted to a string and joined by separators, here separator is nothing
print(password)