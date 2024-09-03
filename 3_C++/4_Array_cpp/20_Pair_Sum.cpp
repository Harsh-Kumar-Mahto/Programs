// O[n^2] complexity
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter size of the array:";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"Enter required sum:";
//     int s;
//     cin>>s;
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[i]+a[j]==s)
//             {
//                 cout<<"True";
//                 return 0;
//             }
//         }
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<"  ";
    }
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
    cout<<"Enter required sum:";
    int s;
    cin>>s;
    //Only for sorted array.
    sort(a,n);
    int start=0;
    int end=(n-1);
    while(start!=end)
    {
        if((a[start]+a[end])<s)
        {
            start++;
        }
        else if((a[start]+a[end])>s)
        {
            end--;
        }
        else
        {
            cout<<"True";
            return 0;
        }
    }
    cout<<"False";
    return 0;
}