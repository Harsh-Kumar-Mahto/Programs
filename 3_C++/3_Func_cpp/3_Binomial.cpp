// Find the binary coefficient(nCr) for given n and r
// nCr= (n!)/(r!)((n-r)!)
#include<iostream>
using namespace std;
int fact(int n)
{
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial*=i;
    }
        return factorial;
}
int main()
{
    int n,r;
    cin>>n>>r;
    float binomial=fact(n)/(fact(r)*fact(n-r));
    cout<<binomial;
    return 0;
}