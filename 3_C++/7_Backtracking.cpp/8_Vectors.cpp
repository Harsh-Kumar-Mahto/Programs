#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // Vector are undefined memory spaces that are not restricted
    vector<int> v;    //Declaration of a vector
    v.push_back(1);
    v.push_back(2);   //Pushing value at back of a vector
    v.push_back(3);

    for(int i=0;i<v.size();i++)   //Accessing the vector as array by traversing its size
    {
        cout<<v[i]<<" ";  //(1,2,3)
    }

    cout<<endl; 

    vector<int>::iterator it;    //Declaration of iterator of a vector quantity
    for(it=v.begin();it<v.end();it++)  //Accessing the vector through its iterator from start to end
    {
        cout<<*it<<" ";  //Since iterator is a pointer we could directly access value at the pointer
    } //(1,2,3)

    cout<<endl;

    for(auto element:v)   //Auto identifies the date type of element according to initialization
    {
        cout<<element<<" ";  //Element are all the values inside the vector or the data type for which auto is used
    } //(1,2,3)

    v.pop_back();   //Pops the last element from the vector (1,2)

    vector<int> v2(3,50);   //(50,50,50) 3 is the size of vector if you want to specify and if all the elements are same(50) we can declare it once

    cout<<endl;

    swap(v,v2);  //swaps the values of v and v2.
    for(int i=0;i<v.size();i++)   
    {
        cout<<v[i]<<" ";  //(1,2) changes to (50,50,50)
    }

    sort(v.begin(),v.end());  //sorts the vector from start to end

    return 0;
}