// WATCH AND CHECK 16.3     7 advanced recursion problems 
// Continue the recursion part after this
#include<iostream>
using namespace std;
// NOT WORKING INSPITE OF SAME CODE
string move(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=move(s.substr(1));
    if(ch=='x')
    {
        return (ans+ch);
    }
    return (ch+ans);
}

int main()
{
    cout<<move("axxbdxcefxhix")<<endl;
    return 0;
}