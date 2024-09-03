// Input an array of size n and print it as {_,_,_,_,_,_,_,_,_,_,_,_}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    cout<<"The input array is:{";
    for(int j=0;j<=n-1;j++)
    {
        cout<<arr[j];
        if(j<n-1)
        cout<<",";
    }
    cout<<"}";
    return 0;
}