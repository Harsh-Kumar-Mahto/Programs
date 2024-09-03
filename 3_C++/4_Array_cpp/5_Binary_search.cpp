// Binary searching of an element in an array
#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int k)
{
    int s=0,e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to search";
    cin>>key;
    if(binarysearch(arr,n,key)==-1)
    {
        cout<<"Input doesn't exist";
    }
    else
    {
        cout<<binarysearch(arr,n,key);
    }
    return 0;
}