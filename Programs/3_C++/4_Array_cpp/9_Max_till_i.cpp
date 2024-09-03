// Write a function to find the maximum element in an array 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mx=-9999999999;
    for(int j=0;j<n;j++)
    {
        mx=max(mx,arr[j]);  //function to find max of two numbers.
        cout<<mx<<endl;
    }
    return 0;
}