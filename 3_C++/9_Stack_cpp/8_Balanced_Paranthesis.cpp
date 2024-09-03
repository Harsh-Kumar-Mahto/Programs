#include<iostream>
#include<stack>
using namespace std;

bool balanced(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='{' || s[i]=='(' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else if((s[i]=='}' && st.top()=='{') || (s[i]==')' && st.top()=='(') || (s[i]==']' && st.top()=='['))
        {
            st.pop();
        }
        else
        {
            return 0;
        }
    }
    if(!st.empty())
    {
        return 0;
    }
    return 1;
}

int main()
{
    if(balanced("()"))
    {
        cout<<"Balanced";
    }
    else
    {
        cout<<"Not Balanced";
    }
    return 0;
}