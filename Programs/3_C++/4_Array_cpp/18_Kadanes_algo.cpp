#include<iostream>
#include<climits>
using namespace std;
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
    int sum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum<0)
        sum=0;
        maxsum=max(sum,maxsum);
    }

    cout<<maxsum;
    return 0;
}