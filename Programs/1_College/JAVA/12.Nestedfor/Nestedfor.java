public class Nestedfor {

	public static void main(String[] args) {
		int spc;
		for(int i=1;i<=5;i++)
		{
			System.out.println();
			for(spc=5;spc>=i;spc--)
			{
				System.out.print(" ");
			}
			for(int j=1;j<=i;j++)
			{
				System.out.print("* ");
			}
		}

	}

}
