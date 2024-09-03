import java.util.Scanner;
public class TwoDArray 
{
	public static void main(String[] args) 
	{
		int m1[][]= {{1,2,3},{4,5,6},{7,8,9}};  //Static definition
		int m2[][]=new int [3][3];  //User input
		Scanner	in=new Scanner(System.in);
		for(int i=0;i<m2.length;i++)
		{
			for(int j=0;j<m2[i].length;j++)
			{
				System.out.print("["+(i+1)+"]["+(j+1)+"]");
				m2[i][j]=in.nextInt();
			}
		}
		System.out.print("First Matrix");
		for(int i=0;i<m1.length;i++)
		{
			System.out.println();
			for (int j=0;j<m1[i].length;j++)
			{
				System.out.print("["+m1[i][j]+"]");
			}
		}
		System.out.println();
		System.out.print("Second Matrix");
		
		for(int i=0;i<m2.length;i++)
		{
			System.out.println();
			for (int j=0;j<m2[i].length;j++)
			{
				System.out.print("["+m2[i][j]+"]");
			}
		}
	}

}
