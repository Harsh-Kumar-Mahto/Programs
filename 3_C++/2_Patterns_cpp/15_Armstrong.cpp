// Check whether a given number is armstrong number or not.
// An armstrong number is a number in which sum of cube of all its digits is equal to the number itself.
// For example:153   (1^3)+(5^3)+(3^3)=1+125+27=153

#include<iostream>
using namespace std;
int main()
{
    int n,a,i=0;
    cin>>n;
    int p=n;
    while(p>0)
    {
        a=p%10;
        p=p/10;
        i=i+(a*a*a);
    }
    if(i==n)
    cout<<"It is armstrong number";
    else
    cout<<"It is not armstrong number";
    return 0;
}