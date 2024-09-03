# Ternary Operator is the single line conditional statement

# When we have to update a value, following sytax is used
# var= value_when_true if condition else value_when_false
food=str(input("Enter the food made:"))
eat="Yes" if food=="Cake" or food=="Jalebi" else "No"
print(eat)

# When we have to print statement according to condition we use following syntax
# statement_when_true if condition else statement_when_false
gender=str(input("Enter your gender:"))
print("You are Male") if gender=="M" else print("You are Female")