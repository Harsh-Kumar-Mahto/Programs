public class AbstractClass  //It is a class that has atleast one incomplete function:Neither object nor its constructor is formed as it in incomplete
// We studied concrete class till now that has all well defined functions
{
    public static void main(String[] args) 
    {
        Shape s=new Circle();   
        s.area();
    //   s.peri();   This can't be done as superclass doesn't have peri function.It is defined in the subclass.
        Circle c=new Circle();
        c.area();
        c.peri();
    }   
}

abstract class Shape
{
   abstract void area();
}
class Circle extends Shape  //Since this class is inheriting an abstract class,it must define the incomplete function
{
    double r=7;
    void area()
    {
        System.out.println("Its area is :"+3.14*r*r);
    }
    void peri()
    {
        System.out.println("Its perimeter is :"+2*3.14*r);
    }
}