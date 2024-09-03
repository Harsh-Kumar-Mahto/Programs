# Check odd even
number=int(input("Enter a number:"))
print("Even") if number%2==0 else print("Odd")

# Greatest of 3 nums
num1=int(input("Enter number 1:"))
num2=int(input("Enter number 2:"))
num3=int(input("Enter number 3:"))

if(num1>num2 and num1>num3):
    print(num1,"is greatest")
elif(num2>num3):
    print(num2,"is greatest")
else:
    print(num3,"is greatest")