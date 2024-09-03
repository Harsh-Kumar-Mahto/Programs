#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    char a[n+1];
    cin>>a;
    for(int i=0;i<=n/2;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            cout<<"No,this is not a palindrome";
            return 0;
        }
    }
    cout<<"Yes,this is a palindrome.";
    return 0;
}