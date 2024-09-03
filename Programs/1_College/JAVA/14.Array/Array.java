import java.util.Scanner;
public class Array {

	public static void main(String[] args)
	{
		int roll[]= {1,2,3,4,5};   //Declaration with definition or Static definition
		int[] marks=new int[5];    //Only Declaration
		//Default values alloted to array
		Scanner in=new Scanner(System.in);
		for(int i=0;i<5;i++)
		{
			System.out.print("Enter the value of "+(i+1)+"st Mark:");
			marks[i]=in.nextInt();
		}
		for (int i=0;i<roll.length;i++)   //Limits the value till length 
			System.out.println(roll[i]+" "+marks[i]);
		
		
	}

}
