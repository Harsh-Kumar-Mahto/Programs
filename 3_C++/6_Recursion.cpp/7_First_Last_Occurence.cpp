#include<iostream>
using namespace std;

int first(int arr[],int n,int num,int pos)   //first occurence of the number
{
    if(pos==n)
    {
        return -1;
    }
    if(arr[pos]==num)
    {
        return pos;
    }
    
    return first(arr,n,num,++pos);
}

int last(int arr[],int n,int num,int pos)
{
    if(pos==n)
    {
        return -1;
    }
    int x=(last(arr,n,num,++pos));
    if(x!=-1)
    {
        return x;
    }
    if(arr[pos]==num)
    {
        return pos;
    }
    return -1;
}

int main()
{
    int a[]={1,2,3,4,3,4};
    cout<<first(a,6,3,0)<<endl;
    cout<<last(a,6,3,0);
    return 0;
}