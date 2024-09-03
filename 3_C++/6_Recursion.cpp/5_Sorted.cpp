#include<iostream>
using namespace std;

bool check(int arr[],int n)
{
    if(n==1)
    {
        return 1;
    }
    return (arr[1]>arr[0] && check(arr+1,n-1));   //arr+1 will shift the 0th index to 1st index(new 0th index)
}

int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(check(a,n))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}