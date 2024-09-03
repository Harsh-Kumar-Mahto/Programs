// We have to count number of subarray of size k which form a number divisible by 3
// Using concept if a number is divisible by 3 than sum of all its number is also divisible by 3
#include<iostream>
#include<vector>
using namespace std;

void subArrDivisibleBy3(vector<int> arr,int n,int k)
{
    pair<int,int>ans;     //making pair to track the start and end of subarray to print answer
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];    //calculating sum of first k elements
    }
    bool found=false;
    if(sum%3==0)         //checking condition
    {
        ans=make_pair(0,k-1); //if true,saving start and end of subarray
        found=true;
    }

    for(int i=k;i<n;i++)   //applying sliding window concept by adding next element and removing previous
    {
        if(found)
        {
            break;
        }
        sum=sum-arr[i-k]+arr[i];
        if(sum%3==0)
        {
            ans=make_pair(i-k+1,i);
            found=true;
        }
    }
    if(!found)
    {
        ans=make_pair(-1,0);
    }
    if(ans.first==-1)
    {
        cout<<"No such subarray exists"<<endl;
    }
    else
    {
        for(int i=ans.first;i<=ans.second;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}

int main()
{
    vector<int>arr={8,23,45,12,56,82};
    subArrDivisibleBy3(arr,6,3);
}