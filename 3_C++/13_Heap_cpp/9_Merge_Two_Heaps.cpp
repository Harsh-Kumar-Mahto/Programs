// Check this code again and make improvements
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> merge(int a1[],int n,int a2[],int m)
// {
//     vector<int> c;
//     int l1=0,l2=0;
//     while(l1<n && l2<m)
//     {
//         if(a1[l1]>a2[l2])
//         {
//             c.push_back(a1[l1++]);
//         }
//         else
//         {
//             c.push_back(a2[l2++]);
//         }
//     }
//     while(l1<n)
//     {
//         c.push_back(a1[l1++]);
//     }
//     while(l2<m)
//     {
//         c.push_back(a2[l2++]);
//     }
//     return c;
// }

// int main()
// {
//     int n,m;
//     cout<<"Enter n:";
//     cin>>n;
//     int arr1[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr1[i];
//     }
//     cout<<"Enter m:";
//     cin>>m;
//     int arr2[m];
//     for(int i=0;i<m;i++)
//     {
//         cin>>arr2[i];
//     }
//     vector<int>t;
//     t=merge(arr1,n,arr2,m);
//     for(int i=0;i<t.size();i++)
//     {
//         cout<<t[i]<<" ";
//     }
//     return 0;
// }