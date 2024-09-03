/*
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
*/
// Every element is a binary coefficient with n as i and r as j
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
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
           int num=fact(i)/(fact(j)*fact(i-j));
           cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}