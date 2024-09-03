//                     Polymorphism
//                |--------------------------| 
//         Compile Time                 Run Time 
//     |-----------------|                  |
//  Function         Operator            Virtual
//  Overloading      Overloading         Function
// (Notes)           (4th code)          (Notes)

// Other example of operator overloading(+ overloading)

#include<iostream>
using namespace std;

class complex
{
    public:
    int real,imag;
    complex(int r,int i)
    {
        real=r;
        imag=i;
    }
    complex(){}
    complex operator +(complex &o)
    {
        complex result;
        result.real=real+o.real;
        result.imag=imag+o.imag;
        return result;
    }
    void print()
    {
        cout<<real<<"+ i"<<imag;
    }
};

int main()
{
    complex a(2,6),b(4,2);
    complex c=a+b;
    c.print();
    return 0;
}