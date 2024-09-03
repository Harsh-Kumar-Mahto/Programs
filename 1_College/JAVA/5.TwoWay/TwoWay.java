import java.util.Scanner;
public class TwoWay 
{
	public static void main(String[] args) 
	{
		int x;
		Scanner input=new Scanner(System.in);
		System.out.print("Enter any number: ");
		x=input.nextInt();//nextInt function converts the input to int and gives to x
		if(x>0)
		System.out.println(x+" is Positive");
		else
		System.out.println(x+" is Negative");
		
	}

}
