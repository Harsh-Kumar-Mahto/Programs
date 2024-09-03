#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    int s;
    cout<<"Enter sum:";
    cin>>s;
    int a[n];
    int sum=0,st=-1,en=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            if(sum==s)
            {
                st=i+1;
                en=j+1;
                cout<<st<<" "<<en;
                return 0;
            }
        }
        sum=0;
    }
    cout<<-1;
    return 0;
}

// Video 8.5 another solution should watch