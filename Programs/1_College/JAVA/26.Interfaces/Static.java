public class Static 
// static: 1.Creating common variables for all objects of a class  2.Calling function without creating objects of a class 3.Creating static block
{
    public static void main(String[] args) 
    {
        A a1=new A();
        A a2=new A(); //1.Same value will be shared.They will not independently get value.That is why every object has count++.

        // B b=new B();
        // b.callme();   //2.This is useless,direct function can be called.
        B.callme();

    }    
        static     //3.This block will be declared before everything.
        {
            System.out.println("This is executed before anything");  
        }
}

class A
{
    static int count=1;  //1.If static not used every object will get independent vlaue of count that will be one.
    A()  //Constructor
    {
        System.out.println("Count: "+count++);
    }
}

class B
{
    static void callme()  //2.Object is not required,direct function can be called.All functions of math.h are static.
    {
        System.out.println("Thanks");
    }
}