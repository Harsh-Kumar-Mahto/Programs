#include<iostream>
#include<stack>
using namespace std;

void reverse(string s)
{
    stack<string> st;
    for(int i=0;i<s.length();i++)
    {
        string word="";
        while(s[i]!=' ' && i<s.length())
        {
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    for(int i=0;i<s.length();i++)  //while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main()
{
    string s="Hey, how are you doing?";
    reverse(s);
}