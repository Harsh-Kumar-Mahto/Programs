// similar to previous problem
// Painters are to be alloted sequential order of boards that take particular time to be painted and we want min possible maximum taken to paint all the boards
#include<iostream>
#include<climits>
using namespace std;

bool isPossible(int arr[],int n,int m, int min)
{
    int painters=1,sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>min)
        {
            return false;
        }
        if(sum+arr[i]>min)
        {
            painters++;
            sum=arr[i];
            if(painters>m)
            {
                return false;
            }
        }
        else
        {
            sum+=arr[i];
        }
    }
    return true;
}

int minTime(int arr[],int n,int m)
{
    if(n<m)
    {
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int start=0,end=sum,ans=INT_MAX;
    while(start<end)
    {
        int mid=(start+end)/2;
        if(isPossible(arr,n,m,mid))
        {
            ans=min(ans,mid);
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
}

int main()
{
    int arr[]={10,20,30,40};
    int n=4;
    int m=2;
    cout<<"Minimum time required:"<<minTime(arr,n,m)<<endl;
    return 0;
}