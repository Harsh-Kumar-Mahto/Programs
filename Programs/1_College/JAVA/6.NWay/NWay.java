import java.util.Scanner;//Necessary to take input
public class NWay 
{
	public static void main(String[] args)
	{
		int x;
		Scanner input=new Scanner(System.in);
		System.out.print("Enter any number: ");
		x=input.nextInt();
		if(x>0)
			System.out.println(x+" is Positive");
		else if(x<0)
			System.out.println(x+" is Negative");
		else
			System.out.println(x+" is Zero");
	}
}
