# Add data to a file
f=open("27_Practice.txt","w")   #Automatically creates file if it does not exists
f.write("Hi everyone\nwe are learning File I/O\nusing Java\nIlike programming in Java")
f.close()

# In the above text, replace all the Java occurences with python and find whether earning word exists in the file or not
with open("27_Practice.txt","r") as f:
    data=f.read()
    print(data)

new_data=data.replace("Java","Python")  # Doesn't do any change in the actual file, just manipulates the string stored in data
print(new_data)

with open("27_Practice.txt","w+") as f:
    f.write(new_data)
    data=f.read()

if data.find("earning")!=-1:
    print("Yes")
else:
    print("No")

# Check in which line learning word came first
def check_for_line(word):
    line_no=1
    data=True
    found=False
    with open("27_Practice.txt","r") as f:
        while data:
            data=f.readline()
            if word in data:
                print("Line number",line_no)
                found=True
                break
            line_no+=1
        if found==False:
            print("Not present")

check_for_line("learning")

# One more very good questions