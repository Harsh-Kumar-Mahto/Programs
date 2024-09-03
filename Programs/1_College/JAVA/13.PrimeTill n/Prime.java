import java.util.Scanner;
public class Prime 
{

	public static void main(String[] args)
	{
		int num;
		Scanner in=new Scanner(System.in);
		System.out.println("Enter a number");
		do
		{
			int Prime=0;
			num=in.nextInt();
			for(int i=2;i<num;i++)     //for(int i=2;i<Math.sqrt(num);i++)    More efficient
			{
				if(num%i==0) 
				{
					Prime=1;
				    break;
				}
			}
			if(Prime==1)
				System.out.println("It is Not Prime");
			else
				System.out.println("It is Prime");
		}
		while(num!=0);
	}

}
