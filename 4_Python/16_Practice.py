# Store some words and meanings in the dictionary
meaning={
    "table":["a piece of furniture","list of facts & figures"],
    "cat":"a small animal"
}
print(meaning)

# Given a list of subjects. Assuming that one classroom is required for 1 subject, How many classrooms are needed by all students
subjects={"python","java","C++","python","javascript","java","python","java","C++","C"}
print(subjects)
print(len(subjects))

# Start with empty dictionary and enter marks of three subjects from user
marks={}
marks["phy"]=input("Enter phy marks:")
marks["chem"]=input("Enter chem marks:")
marks['maths']=input("Enter maths marks:")
print(marks)

# Store 9 & 9.0 as separate values in a set

# 1st option
values={"9",9.0}
print(values)

# 2nd approach
values={("int",9),("float",9.0)}   #used tuples
print(values)