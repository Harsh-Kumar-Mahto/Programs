// In the given array find the minimum index of the repeating element. 

#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)   //input the array
    {
        cin>>a[i];
    }
    const int N=n+1;    //make another array 
    int idx[N];
    for(int i=0;i<N;i++)  //initialize the elements as -1;
    {
        idx[i]=-1;
    }
    int minidx= INT_MAX;  //initially set the value of minimum index as maximum possible
    for(int i=0;i<n;i++)  //traverse the array
    {
        if(idx[a[i]]!=-1)  // since value in idx array is not -1 this means the element has already occured
        {
            minidx=min(minidx,idx[a[i]]);  //just check whether this occured element had lower index than minidx or not and update accordingly
        }
        else   //if the value at idx is -1 this means the element occured for the first time, so update the value as the index of that element in the actual array
        {
            idx[a[i]]=i;
        }
    }

    if(minidx==INT_MAX)  //output the result acoordingly
    {
        cout<<"-1";
    }
    else
    {
        cout<<minidx;
    }
    return 0;
}

// This is the bruteforce approach, here we are taking elements one by one checking that which element becomes the first to repeat 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter size of the array:";
//     cin>>n;
//     int a[n],ans=-1;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=(i+1);j<n;j++)
//         {
//             if(a[i]==a[j])
//             {
//                 ans=i+1;
//                 cout<<ans;
//                 return 0;
//             }
//         }
//     }
//     cout<<ans;
//     return 0;
// }