// Arithmetic array  contains atleast two elements and difference between consecutive integers is equal.

// Find the maximum number of elements forming an arithmetic subarray
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
    int cd=arr[1]-arr[0];  //current difference
    int index=2;    //current position
    int count=2;    //number of elements in arithmetic subarray 
    int ans=2;      //number of elements in max arithmetic subarray 
    while(index<n)
    {
        if(cd==arr[index]-arr[index-1])  //if difference of current element is same as cd, increasing count of arithmetic subarray
        {
            count++;
        }
        else
        {
            cd=arr[index]-arr[index-1];   //if difference is not equal to cd,update the new cd and set count again to 2(current and previous element in the arith subarray)
            count=2;
        }
        index++;   //regularly increment the index
        ans=max(ans,count);  //check for maximum of previous ans and the current count
    }
    cout<<ans;
    return 0;
}