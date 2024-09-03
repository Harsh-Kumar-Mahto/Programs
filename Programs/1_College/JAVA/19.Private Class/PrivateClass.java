public class PrivateClass
{
//Encapsulation
	public static void main(String[] args) 
	{
		Cube box=new Cube();   //Default constructor
		box.setL(20);          //Using setters to maintain data security
		box.setB(30);
		box.setH(40);
		box.volume();
		
		System.out.println("Length of box: "+box.getL());	
	}

}


class Cube
{
	private double l,b,h;
	void volume()
	{
		System.out.println("Volume of Box: "+l*b*h);
	}
//	These three are setters
	void setL(double x) {l=x;}
	void setB(double x) {b=x;}
	void setH(double x) {h=x;}
	
//	These three are getters
	double getL() {return l;}
	double getB() {return b;}
	double getH() {return h;}
}