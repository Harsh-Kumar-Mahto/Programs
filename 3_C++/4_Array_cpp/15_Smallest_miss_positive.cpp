#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    const int N=1e6+2;
    bool check[N];
    for(int i=0;i<N;i++)
    {
        check[i]=false;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            check[a[i]]=true;
        }
    }    
    for(int i=0;i<N;i++)
    {
        if(check[i]==false)
        {
            cout<<"Missing smallest positive number is:"<<i;
            return 0;
        }
    }
    return 0;
}