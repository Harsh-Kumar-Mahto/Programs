import java.util.Scanner;
public class DigitSum {

	public static void main(String[] args) {
		int num,sum=0;
		Scanner in=new Scanner(System.in);
		System.out.println("Enter a number to find the sum of its digits");
		num=in.nextInt();
		do {
			sum=sum+(num%10);
			num=num/10;
			}		
		while(num!=0);
		System.out.print(sum);
		

	}

}
