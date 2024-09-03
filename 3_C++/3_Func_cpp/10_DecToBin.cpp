// Decimal to Binary
#include<iostream>
using namespace std;

int DecimaltoBinary(int n)
{
    int res=0;
    int x=1;
    while(x<=n)
    {
        x*=2;
    }
    x/=2;
    while(x>0)
    {
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=2;
        res=res*10+lastdigit;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    cout<<DecimaltoBinary(n);
    return 0;
}