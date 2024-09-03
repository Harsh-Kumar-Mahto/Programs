public class Dynamic 
{
    public static void main(String[] args) 
    {
        A a=new C();   //Objects of sub class can be stored in the superclass
        a.show();
    }
}

class A
{
    int x=10;
    void show()
    {
        System.out.println("This is A");
    }
}

class B extends A
{
    int x= 20;
    void show()
    {
    System.out.println("This is B");
    }
}

class C extends B
{
    int x;
    void show()
    {
        System.out.println("This is C    "+x);      //Prints x of current class
        System.out.println("This is C    "+ super.x);   //Prints x of the immediate super class
    }
}