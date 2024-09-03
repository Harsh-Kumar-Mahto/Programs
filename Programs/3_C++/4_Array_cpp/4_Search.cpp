// Search a given number in the array
#include<iostream>
using namespace std;
int search(int n,int arr[],int p)
{
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]==p)
        return i+1;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the value to search:";
    cin>>key;  //we have to search this number in our array
    if(search(n,arr,key)==0)
    {
        cout<<"Input not exist";
    }
    else
    {
        cout<<"Its position is:"<<search(n,arr,key);
    }
    return 0;
}