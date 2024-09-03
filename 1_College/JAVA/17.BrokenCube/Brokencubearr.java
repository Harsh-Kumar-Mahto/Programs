import java.util.Scanner;
public class Brokencubearr 
{
	public static void main(String[] args) 
	{
		int i,j;
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the number of rows");
		i=in.nextInt();
		int m[][]=new int[i][];
		for(int p=0;p<i;p++)
		{
			System.out.println("Enter columns of "+(p+1)+" row");
			j=in.nextInt();
			m[p]=new int[j];
		}
		for(int q=0;q<m.length;q++)
		{
			for(int r=0;r<m[q].length;r++)
			{
				System.out.print("["+(q+1)+"]["+(r+1)+"]: ");
				m[q][r]=in.nextInt();
			}
		}
		for(int r=0;r<m.length;r++)
		{
			System.out.println();
			for (int q=0;q<m[r].length;q++)
			{
				System.out.print("["+m[r][q]+"]");
			}
		}
	}

}