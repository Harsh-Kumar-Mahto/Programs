#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myCompare(pair<int,int>p1,pair<int,int>p2)
{
    return p1.first<p2.first;
}

int main()
{
    // pair<int,char> p;  //Declaration of a pair containing datatype of both elements
    // p.first=6;  //Initialization of values 
    // p.second='c';
    // cout<<p.first<<" "<<p.second;

    // Reduce an array:Change values of array from 0 to (n-1) without sorting 
    int arr[]={10,16,7,14,5,3,12,9};
    vector<pair<int,int>> v;   //making pair of elements with indices
    
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        v.push_back(make_pair(arr[i],i));  //make_pair function is used to form pair
    }

    sort(v.begin(),v.end(),myCompare);  //sort according to first element of vector 
    for(int i=0;i<v.size();i++)
    {
        arr[v[i].second]=i;  //changing values of sorted array
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<arr[i]<<" ";
    }

}