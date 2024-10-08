#include<iostream>
#include<math.h>
#include<stack>
using namespace std;

int postfix(string s)
{
    stack<int> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            st.push(s[i]-'0');   //to give integer value and not ASCI value
        }
        else
        {
            int op2=st.top();  //first popped int is op2 as this is postfix
            st.pop();
            int op1=st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;   
            case '^':
                st.push(op1^op2);
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    cout<<postfix("46+2/5*7+")<<endl;
    return 0;
}