#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int prec(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='*' || c=='/')
    {
        return 2;
    }
    else if(c=='+' || c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string intopre(string s)
{
    stack<char> st;
    string res;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='z')
        {
            res+=s[i];
        }
        else if(s[i]==')')  // reversing the restrictions of braces
        {
            st.push(s[i]);
        }
        else if(s[i]=='(')
        {
            while(!st.empty() && st.top()!=')')
            {
                res+=st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while(!st.empty() && prec(s[i])<prec(st.top()))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}

int main()
{
    cout<<intopre("(a-b/c)*(a/k-l)");
}