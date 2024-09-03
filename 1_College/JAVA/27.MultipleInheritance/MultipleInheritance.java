public class MultipleInheritance  //Multiple Inheritance can't be done in concrete or abstract classes but an alternative is there with inerface
{
    public static void main(String[] args) 
    {
        C c=new C();
        c.show();
    }
}

interface A
{
    int a=10;
}
interface B
{
    int a=20;
}

class C implements A,B   //Multiple interfaces can be inherited
{
    void show()
    {
        System.out.println("a= "+A.a);  //Ambiquity is solved of common variable a.
        System.out.println("a= "+B.a);
    }
}





// Package and exceptional handling