#include<iostream>
#include<map>
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
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]+=1;
    }
    int maxi=INT_MIN;
    int ans=-1;
    for(auto i:m)
    {
        if(i.second>maxi)
        {
            maxi=i.second;
            ans=i.first;
        }
    }
    cout<<"Maximum occuring element: "<<ans<<"("<<maxi<<" times)";
}