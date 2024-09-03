# Clever if is also a ternary i.e sigle line if statement
# var= (false_value , true_value)[condition]

age=int(input("Enter age:"))
vote=("No","Yes")[age>=18]
print(vote)

sal=float(input("Enter salary:"))
tax=sal*(0.1,0.2)[sal>=50000]
print(tax)