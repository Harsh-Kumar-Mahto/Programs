class Student:
    branch="CSE"   # common attributes can be defined as this
    def __init__(self,fullname):   #self or any other name of object must be given, it is a reference to the object
        self.name=fullname
        print("Adding new student in Database..")
    def welcome(self):
        print("Welcome !",self.name)

s1=Student("Harsh")
print(s1.name)
print(s1.branch)
print(Student.branch)
s1.welcome()

# Create student class that takes name & marks of 3 subjects as argument in constructor. Then create a method to print average
class Marks:
    def __init__(self,name,mark1,mark2,mark3):
        self.name=name
        self.mark1=mark1
        self.mark2=mark2
        self.mark3=mark3

    # On using this decorator we can make the attributes whose value depend on some other attributes and we no need to call function again and again
    # the returned value is assigned to the attribute, whenever depending attributes are changed and again this attribute is used, the value is automatically updated and we don't need to call any funtion
    @property
    def average(self):
        avg=(self.mark1+self.mark2+self.mark3)/3
        return avg

    #When we want to make function that doesn't require object so we don't need self so we make those functions as static
    @staticmethod    
    def Johaar():
        print("Johaar!")

St1=Marks("Harsh",95,96,97)
print("\n\n")
St1.Johaar()
print(St1.average)
St1.mark2=93
print(St1.average)

# @staticmethod is decorator and decorators allow us to wrap another function in order to extend the behaviour of the wrapped function without permanently modifying it