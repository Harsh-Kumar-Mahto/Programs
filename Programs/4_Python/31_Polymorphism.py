# We can implement polymorphism as operator overloading using dunder functions
class Complex:
    def __init__(self,real,img):
        self.real=real
        self.img=img
    
    def display(self):
        print(self.real,"+",self.img,"i")
    
    # We can also use normal function to add 2 complex number but then we will not be able to use + operator for addition and we have to call functions for the same
    def __add__(num1,num2):  # __add__ is the dinder function used for overloading + operator
        newreal=num1.real+num2.real
        newimg=num1.img+num2.img
        return Complex(newreal,newimg)
    
c1=Complex(1,2)
c2=Complex(2,3)
(c1+c2).display()