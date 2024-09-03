import java.util.Scanner;
public class Modification
//This is also called as function overloading or runtime/dynamic polymorphism
{
    public static void main(String[] args) 
    {
        Box b1=new Box();
        b1.Volume();
        NewBox nb=new NewBox();
        nb.Volume();
    }    
}

class Box
{
    double l,b,h;
    void Volume()
    {
        Scanner in=new Scanner(System.in);
        System.out.print("Enter the length of the Box: ");
        l=in.nextInt();
        System.out.print("Enter the breadth of the Box: ");
        b=in.nextInt();
        System.out.print("Enter the height of the Box: ");
        h=in.nextInt();
        System.out.print("Volume of Box is : "+ l*b*h);
    }
}

class NewBox extends Box
{
    String color="Red";
    void Volume()           //Modification of pre existing feature
    {
        Scanner in=new Scanner(System.in);
        System.out.print("Enter the length of the Box: ");
        l=in.nextInt();
        System.out.print("Enter the breadth of the Box: ");
        b=in.nextInt();
        System.out.print("Enter the height of the Box: ");
        h=in.nextInt();
        System.out.print("Volume of Box is : "+ l*b*h+"  Color of box is: "+color);
    }
}