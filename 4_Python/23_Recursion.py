# A function call itself recursively

# Print m to n
def ascending(m,n):
    print(m)
    if m==n:      #Base case
        return
    ascending(m+1,n)

ascending(5,10)

def descending(m,n):
    print(n)
    if m==n:      #Base case
        return 
    descending(m,n-1)

descending(5,10)

# sum of n numbers
def nsum(n):
    if n==0:
        return 0
    return(n+nsum(n-1))

print("Sum of n numbers:",nsum(5))

# Print elements of list
def print_el(list,idx=0):
    if idx==len(list):
        return
    print(list[idx],end=" ")
    print_el(list,idx+1)

print_el([4,3,0,23,5,5,2,8,1])