import java.util.Scanner;
public class Inheritance
{
    // Inheritance is a feature of OOP that allows programmer to acquire feature of existing class
    // It also allows to do reqired modifications and updations
   public static void main(String[] args) 
   {
    Square t1= new Square();
    t1.Area();
    NewSquare ns=new NewSquare();
    ns.Area();                //Pre exisitng acquired feature
    ns.Peri();                //Added feature
   }
}

class Square
{
    double a;
    void Area()
    {
        System.out.print("Enter the length of side of square:");
        Scanner input=new Scanner(System.in);
        a=input.nextInt();
        System.out.println("Area of Square is: "+a*a);
    }
}

class NewSquare extends Square       //This is acquiring the features of existing class
{
    void Peri()
    {
        System.out.println("Perimeter of square is: "+4*a);  //Updation i.e. addition of new feature
    }
}