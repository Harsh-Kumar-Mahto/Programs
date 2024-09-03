public class Final 
//   final :1.Creating Constant Variable 2.Preventing Method Overriding 3.Preventing Inheritance 
{
    public static void main(String[] args) 
    {
        final int x=10;
        // x=20; 1. Value of x will not change as x is final
        System.out.println(x);
    }    
}

final class A
{
    final void function()
    {
        System.out.println("This is a function");
    }
}
// class B extends A
// {
//   2.  void function()
//     {
//         System.out.println("Function overriding can't be done as A class is final");
//     }
// }


//3. class C extends A
// {
//     void print()
//     {
//         System.out.println("This function can't be inherited as class A is final");
//     }
// }