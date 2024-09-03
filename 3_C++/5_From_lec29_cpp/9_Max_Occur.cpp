#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    char curr=str[0];
    char ans=str[0];
    int num=0,maxi=INT_MIN;

    // Another way in lec32.
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==curr)
        {
            num++;
        }
        else
        {
            curr=str[i];
            num=1;
        }
        if(num>maxi)
        {
            maxi=num;
            ans=str[i];
        }
    }
    cout<<maxi<<endl<<ans;

    return 0;
}