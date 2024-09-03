import java.io.*;
public class Exceptionalhandling 
// Every code can have two errors:1.Compile time     2.Run time(Known as exception in java)
// Notes
{
    public static void main(String[] args) 
    {
        int x=10,y=0;
        int z;
        // z=x/y;
        // System.out.println("z= "+z);   //Unchecked exception(ArithmeticException):We are not forced to give the solution
        // Object is automatically created

        try
        {
            z=x/y;  //On checking the condition the exception is thrown and we need to catch it
        }
        catch(ArithmeticException ae)     //We create an object of the exception and give a solution to the catched exception
        {
            System.out.println("Sorry error occured");
        }
        // System.out.println(z);    we need to initailize the value of z prior in order to print value as on trying the operation no value is initialized to z

        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));  //Old input method
        // BufferefReder is the default class where all memory is alocated by default
        String s;
        z=0;
        try
        {
            s=br.readLine();   //Checkd Exception(IOException):Necessary to provide a solution
            z=Integer.parseInt(s);  //Unchecked (Number format exception)
        }
        catch(IOException ioe)
        {
            System.out.println("IO Error");    //
        }
        catch(NumberFormatException ioe)    //Checks for Invalid input from the keyboard(Non int)
        {
            System.out.println("Wrong Input");
            System.out.println("z= "+z);
        }
        // catch(Exception ioe)     checks all type of error commonly
        // {
        //     System.out.println("Error");
        // }
    } 
}



// Throw Throws Finally