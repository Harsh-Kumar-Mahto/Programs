public class Interface //These are such classes that have all its method incomplete.These all methods are by default public and abstract.
//All the variables declared in an interface are by default static and final.
{
    public static void main(String[] args) 
    {
        Rectangle r=new Rectangle();
        r.area();
    }    
}

interface Shape
{
    double pi=3.14;  //By default it is static so can be used without an object and final so it an't be overrided.
    void area();   //By default it is public so can be accessed anywhere and abstract so no complete function can be made.
}

class Rectangle implements Shape  //TO inherit interface we have to write implements
{
    double a=10,b=20;
    public void area() //Since we are implementing Shape so area must be public here also as by default it is public in Shape
    {
        System.out.println("Area :"+a*b);
    }
}