# Sum of n numbers
n=int(input("Enter number other than 0:"))
sum=0
for el in range(1,n+1):
    sum+=el

print(sum)

# Factorial of n
fact=1
for el in range(1,n+1):
    fact*=el
print(fact)