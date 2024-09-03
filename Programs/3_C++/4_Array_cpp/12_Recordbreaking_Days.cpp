// A record breaking day is one which satisfies the following two conditions
// 1. The number of visitors on the day is strictly larger than each of the previous days
// 2. Either it is the last day, or the number of visitors on day is strictly larger than that of the following day
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)  //input array with number of visitors in each day
    {
        cin>>a[i];
    }
    int rb=0;   //initially no record breaking days
    int mx=a[0]; //variable to store the max element till now 
    for(int i=0;i<n;i++)  //traverse the whole array
    {
        if(i==0)   //for the first element, if it is greater than second element it is a record breaking day
        {
            if(a[i]>a[i+1])
            {
                rb++;
            }
            
        }
        else if(i==(n-1)) //for the last element, it must be greater than the previous maximum to be record breaking
        {
            if(a[i]>mx)
            {
                rb++;
            }
        }
        else
        {
            if(a[i]>mx && a[i]>a[i+1])   //for every intermediate element, it must satisfy both conditions that its value must be greater than prev max as well as the next element
            {
                rb++;
                mx=a[i];
            }
        }
    }
    cout<<rb;
    return 0;
}