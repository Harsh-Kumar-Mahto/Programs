#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n)
{
    int sum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
        sum=0;
        maxsum=max(sum,maxsum);
    }
    return maxsum;
}
int main()
{
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int wrapsum;
    int nonwrapsum;
    int totalsum=0;

    nonwrapsum=kadane(a,n);

    for(int i=0;i<n;i++)
    {
        totalsum+=a[i];  //Calculating total sum to find circular maxsum.  
        a[i]=-a[i];   //Reversing the contributing elements to find sum of non contributing one's
    }
    wrapsum=totalsum+kadane(a,n);  //Removing the sum of non contributing elements in maxsum which is -ve therefore we have to add.
    cout<<max(wrapsum,nonwrapsum);
    return 0;
}