import java.util.Scanner;  //Null pointer exception:We try to give memory to object but it is not being allocated
public class Finally 
{
    public static void main(String[] args) 
    {
        Scanner in= new Scanner(System.in);
        int x=0;
        System.out.println("Enter your age: ");
        try
        {
        x=in.nextInt();
        if(x<18)
        throw new ArithmeticException("O Boy you can't smoke!!");  //We generate our own exception
        }
        catch(ArithmeticException ae){}
        finally{System.out.println("This will always executed");}
    }    
}