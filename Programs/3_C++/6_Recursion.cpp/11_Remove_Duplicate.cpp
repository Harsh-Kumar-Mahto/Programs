#include<iostream>
#include<string>
using namespace std;
// NOT WORKING INSPITE OF SAME CODE  
string remove(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=remove(s.substr(1));
    if(ch==ans[0])
    {
        return ans;
    }
    return (ch+ans);
}

int main()
{
    cout<<remove("aaaabbbeeecdddd")<<endl;
    return 0;
}