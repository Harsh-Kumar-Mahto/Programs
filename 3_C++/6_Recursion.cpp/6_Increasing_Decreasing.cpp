#include<iostream>
using namespace std;

int dec(int n)
{
    if(n==0)
    {
        return 0;
    }
    cout<<n<<" ";
    return dec(n-1);
}

int inc(int n)
{
    if(n==0)
    {
        return 0;
    }
    inc(n-1);
    cout<<n<<" ";
    return 0;
}

int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    dec(n);
    cout<<endl;
    inc(n);
    return 0;
}