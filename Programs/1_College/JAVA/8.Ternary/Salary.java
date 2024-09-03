import java.util.Scanner;
public class Salary 
{
	public static void main(String[] args)
	{
	 int sal,bonus;
	 Scanner input=new Scanner(System.in);
	 System.out.println("Enter your salary: ");
	 sal=input.nextInt();
	 //ternary operator 
	 //variable=(Condition)? true then this:false then this;
	 bonus=(sal<5000)?sal*10/100:sal*5/100;
	 System.out.println("Bonus is: "+ bonus);
	}
}
