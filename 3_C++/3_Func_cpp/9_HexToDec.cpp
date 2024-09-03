// HexaDecimal to Decimal
#include<iostream>
#include<cmath>
using namespace std;

int HexaDecimalToDecimal(string n)
{
    int res=0;
    int size=n.length();
    for(int i=0;i<size;i++)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            res+=(pow(16,size-i-1)*(n[i]-'0'));
        }
        else if(n[i]>='A' && n[i]<='F'){
            int p=n[i]-'A'+10;
            res+=(pow(16,size-i-1)*p);
        }
    }
    return res;
}

int main()
{
    string n;
    cin>>n;
    cout<<HexaDecimalToDecimal(n);
    return 0;   
}