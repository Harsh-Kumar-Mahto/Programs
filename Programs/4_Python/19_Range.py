# Range function returns a sequence of numbers from 0 (by default) and increments by 1(by default) and stops before a specified number
# The stop point is not included

# 1: range(stop_point)
for el in range(5):  # range(5): 0 1 2 3 4
    print(el)
else:
    print("END")

# 2.range(start_point,stop_point)
for el in range(1,5):   # range(1,5): 1 2 3 4 
    print(el)
else:
    print("END")

# 3.range(start_point,stop_point,step)
for el in range(1,5,2):  # range(1,5,2): 1 3
    print(el)
else:
    print("END")



# print 100 to 1
for el in range(100,0,-1):
    print(el)
else:
    print("END")

# print table of n
n=int(input("Enter a number:"))
for el in range(1,11):
    print(n*el)