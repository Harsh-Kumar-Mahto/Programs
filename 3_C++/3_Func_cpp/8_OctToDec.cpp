// Octal to Decimal conversion
#include<iostream>
#include<cmath>
using namespace std;

int OctalToDecimal(int n)
{
    int i=0;
    int res=0;
    while(n!=0)
    {
        res+=(pow(8,i++)*(n%10));
        n/=10;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    cout<<OctalToDecimal(n);
    return 0;   
}