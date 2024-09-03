public class Constructor //It is a special the has following features
//1.Name of constructor is identical to name of the class
//2.It can not return any value
//3.It is automatically called when an object of the class is created.It can't be called manually
{

	public static void main(String[] args)
	{
		Square box=new Square(10,20,25);
        box.volume();
        Square copy= new Square(box);
        copy.volume();      
	}

}

class Square
{
	private double l,b,h;
	Square(double x,double y,double z){l=x;b=y;h=z;}    //Parameterized constructor
	Square(){l=0;b=0;h=0;}                              //Default constructor
	Square(Square box){l=box.l;b=box.b;h=box.h;}        //Copy constructor of parameterized constructor
	void volume()
	{
		System.out.println("Volume of Box: "+ l*b*h);
	}
}