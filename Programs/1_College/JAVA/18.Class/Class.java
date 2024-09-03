public class Class
{

	public static void main(String[] args) 
	{
		Box box=new Box();   //Default constructor
		box.l=1;
		box.b=2;
		box.h=4;
		box.volume();
	}

}


class Box
{
//	Default access in java allows access in same package,public required to access in another package. 
	double l,b,h;
	void volume()
	{
		System.out.println("Volume of Box: "+l*b*h);
	}
}