//Binary to Decimal Conversion
#include<iostream>
#include<cmath>
using namespace std;

int BinaryToDecimal(int n)
{
    int i=0;
    int res=0;
    while(n!=0)
    {
        res+=(pow(2,i++)*(n%10));
        n/=10;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    cout<<BinaryToDecimal(n);
    return 0;   
}