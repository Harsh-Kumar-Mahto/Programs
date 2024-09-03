public class ObjectThis 
{
//	Used for scope resolution and as pointer of objects

	public static void main(String[] args) 
	{
		Sample s=new Sample();
		s.show();     //Pointer of s object of sample class
	}
}

class Sample
{
	double x;
	void show()
	{
		int x=20;
		System.out.println(this);
		System.out.println("X :"+ x);
		System.out.println("X :"+ this.x);
		
	}
}