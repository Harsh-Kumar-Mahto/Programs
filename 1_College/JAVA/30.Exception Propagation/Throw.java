import java.util.Scanner;
public class Throw 
{
    public static void main(String[] args) 
    {
        Scanner in= new Scanner(System.in);
        int x=0;
        System.out.println("Enter your age: ");
        x=in.nextInt();
        if(x<18)
        throw new ArithmeticException("O Boy you can't smoke!!");  //We generate our own exception
        System.out.println("Man, you can smoke.");
    }    
}