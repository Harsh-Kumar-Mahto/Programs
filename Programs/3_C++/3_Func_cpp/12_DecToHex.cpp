// Decimal to HexaDecimal
#include<iostream>
using namespace std;

string DecimaltoHexaDecimal(int n)
{
    int x=1;
    string res="";
    while(x<=n)
    {
        x*=16;
    }
    x/=16;
    while(x>0)
    {
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=16;
        if(lastdigit>9)
        {
            char c='A'+lastdigit-10;
            res+=c;
        }
        else{
            res+=to_string(lastdigit);
        }
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    cout<<DecimaltoHexaDecimal(n);
    return 0;
}