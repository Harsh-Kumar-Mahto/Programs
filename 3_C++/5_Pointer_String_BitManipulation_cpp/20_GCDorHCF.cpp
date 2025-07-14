// Observation:On subtracting the numbers or finding their modulo does not change their hcf until the result becomes 0.
// Euclid's Algorithm
#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main()
{
    cout<<"Enter two numbers to find HCF:";
    int num1,num2;
    cin>>num1>>num2;
    cout<<gcd(num1,num2);
    return 0;
}