#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string num;
    cin>>num;
    sort(num.begin(),num.end(),greater<int>());  //Shortcut to sort in descending order
    cout<<num;
    // sort(num.begin(),num.end());
    // for(int i=(num.length()-1);i>=0;i--)
    // {
    //     cout<<num[i];
    // }
    return 0;
}