import java.io.BufferedReader;
import java.io.*;
import java.io.IOException;
// Stack trace: chain of propagation of the problem.

public class Throws   //Propagate the checked exception and does not provide the solution.
{
    public static void main(String[] args)  throws IOException
    {
        int z=0;String s;
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a number:");
        s=br.readLine();  //This is a checked exception (IOException) but is propagated to the next caller due to throws.
        z=Integer.parseInt(s);

        System.out.println("z="+z);
    }    
}
