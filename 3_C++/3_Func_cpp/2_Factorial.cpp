// Find the factorial of a given number.
#include<iostream>
using namespace std;
void fact(int n)
{
    int c=1;
    for(int i=1;i<=n;i++)
    {
        c*=i;
    }
    cout<<c<<endl;
    return ;
}
int main()
{
    int a;
    cin>>a;
    fact(a);
    return 0;
}