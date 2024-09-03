// By making pop costly
#include<iostream>
#include<queue>
using namespace std;

class stack
{
    int n;
    queue<int> q1;
    queue<int> q2;
    public:
    stack()
    {
        n=0;
    }

    void push(int val)
    {
        n++;
        q1.push(val);
    }
    
    void pop()
    {
        if(q1.empty())
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        n--;
        // queue<int> temp=q1;
        // q1=q2;
        // q2=temp;
        swap(q1,q2);
    }

    int top()
    {
        if(q1.empty())
        {
            return -1;
        }
        return q1.back();
    }

    int size()
    {
        return n;
    }
};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.size()<<endl;
    st.pop();
    return 0;
}