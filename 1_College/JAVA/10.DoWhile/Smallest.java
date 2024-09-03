import java.util.Scanner;
public class Smallest {

	public static void main(String[] args) {
		int scan,small=99999;
		Scanner in=new Scanner(System.in);
		System.out.println("Enter number other than 0");
		do
		{
			scan=in.nextInt();
			if(scan<small&&scan!=0)
				small=scan;
		}
		while(scan!=0);
		System.out.print(small);
		

	}

}
