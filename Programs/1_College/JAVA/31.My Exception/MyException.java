public class MyException 
{
    public static void main(String[] args) 
    {
        int x=10;
        if(x<20) throw new Exception();
    }    
}


class Exception extends RuntimeException
{
    @Override
    public String toString()
    {
        return "Wrong Data";
    }
}