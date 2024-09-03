#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
    public:
    void area(int base,int height)
    {
        cout<<"Area of right angled triangle: "<<0.5*base*height;
    }
    void area(int side)
    {
        cout<<"Area of equilateral triangle: "<<(1.732*side*side)/4;
    }
    void area(int a,int b,int c)
    {
        int s=(a+b+c)/2;
        int area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area of triangle: "<<area;
    }
};
int main()
{
    Triangle t1;
    t1.area(2);
    cout<<endl;
    t1.area(2,4);
    cout<<endl;
    t1.area(3,4,5);
    cout<<endl;
    return 0;
}