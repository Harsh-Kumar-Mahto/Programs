// Decimal to Octal
#include<iostream>
using namespace std;

int DecimaltoOctal(int n)
{
    int res=0;
    int x=1;
    while(x<n)
    {
        x*=8;
    }
    x/=8;
    while(x>0)
    {
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=8;
        res=res*10+lastdigit;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    cout<<DecimaltoOctal(n);
    return 0;
}