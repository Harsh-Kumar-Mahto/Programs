import java.util.Scanner;
public class Nonsquarematrix 
{

	public static void main(String[] args) 
	{
		int i,j;
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the number of rows");
		i=in.nextInt();
		System.out.println("Enter the number of column");
		j=in.nextInt();
		int m[][]=new int[i][j];
		for(int p=0;p<m.length;p++)
		{
			for(int q=0;q<m[p].length;q++)
			{
				System.out.print("["+(p+1)+"]["+(q+1)+"]");
				m[p][q]=in.nextInt();
			}
		}
		System.out.print("First Matrix");
		for(int p=0;p<m.length;p++)
		{
			System.out.println();
			for (int q=0;q<m[p].length;q++)
			{
				System.out.print("["+m[p][q]+"]");
			}
		}
		
	}

}
