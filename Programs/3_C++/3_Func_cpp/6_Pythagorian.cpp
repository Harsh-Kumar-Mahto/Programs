// Check whether given set of numbers form a pythagorian triplet or not
#include<iostream>
using namespace std;
bool pythagoras(int a,int b,int c)
{
    int x,y,z;
    if(a>=b&&a>=c)
    {
        x=a;y=b;z=c;
    }
    else
    {
        if(b>=c)
        {
            x=b;y=a;z=c;
        }
        else
        {
            x=c;y=a;z=b;
        }
    }
    if((y*y)+(z*z)==(x*x))
    return 1;
    else
    return 0;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(pythagoras(a,b,c)==1)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}