import java.util.Scanner;
public class OddEven {

	public static void main(String[] args) {
		int num=43;
		System.out.println("Enter number:");
		Scanner in=new Scanner(System.in);
		while(num!=0)
		{
			num=in.nextInt();
			if(num==0)
				break;
			if(num%2==0)
				System.out.println("It is even ");
			else
				System.out.println("It is odd");
		}
				

	}

}
