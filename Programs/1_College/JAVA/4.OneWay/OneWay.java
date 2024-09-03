//Write a program to accept a number and print whether it is positive or negative.
import java.util.Scanner;//Necessary to take input
public class OneWay 
{
	public static void main(String[] args)
	{
		int x;
		Scanner input=new Scanner(System.in);
		System.out.print("Enter any number: ");
		x=input.nextInt();//nextInt function converts the input to int and gives to x
		if(x>0)
		System.out.println(x+" is Positive");
		if(x<0)
		System.out.println(x+" is Negative");
			
	}
}
