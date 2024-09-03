// Using for loop find the sum of first n natural numbers
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}