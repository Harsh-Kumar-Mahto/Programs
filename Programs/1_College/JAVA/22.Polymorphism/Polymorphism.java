public class Polymorphism 
{
//	It is a feature of OOP,It allows programmer to create multiple functions with the same name.
//	The only difference must be	number of arguments or type of argument or both

	public static void main(String[] args) 
	{
		// This is compile time polymorphism or static binding or function overloading
		Triangle t1=new Triangle();
		t1.area(10,20,29);
		
		Triangle t2=new Triangle();
		t2.area(2, 2);
		
		Triangle t3=new Triangle();
		t3.area(2);
	}

}

class Triangle
{
//	Compile time polymorphism,Static Polymorphism
	double a,b,c;
	void area(double a,double b,double c)
	{
		double s=(a+b+c)/2;
		double ar= Math.sqrt(s*(s-a)*(s-b)*(s-c));
		System.out.println("Area of triangle with unequal sides:"+ar);
	}
	void area(double b,double h)
	{
		System.out.println("Area of triangle with base and height:"+(b*h)/2);
	}
	void area(double a)
	{
		System.out.println("Area of equilateral triangle:"+ (1.732*a*a)/4);
	}
}