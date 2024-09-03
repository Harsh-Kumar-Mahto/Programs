public class MultiThreading //Read about it
{
    // Multitasking:Two types
    // 1.Process Based:Process is a program in execution.When multiple programs with independent storage run.
    // 2.Thread Based:When multiple threads(like web pages of chrome)of single program share the memory of program.

    public static void main(String[] args) 
    {
        Thread t= Thread.currentThread();
        System.out.println("Current Thread:"+ t);   //this will print     Current Thread:Thread[#1,main,5,main]  [name,priority,parent]
        System.out.println("Thread Name:"+ t.getName());
        System.out.println("Thread Priority:"+ t.getPriority());  //getParent can't be used.
    }    
}
