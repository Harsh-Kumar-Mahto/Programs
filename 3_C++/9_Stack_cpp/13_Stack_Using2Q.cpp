// 1st method by making push costly
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
        if(q2.empty())
        {
            q1.push(val);
            swap(q1,q2);
            return;
        }
        q1.push(val);
        while(!q2.empty())
        {
            int num=q2.front();
            q2.pop();
            q1.push(num);
        }
        swap(q1,q2);
    }

    void pop()
    {
        if(q2.empty())
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        q2.pop();
        n--;
    }

    int top()
    {
        return q2.front();
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
    st.pop();
    st.pop();
    st.pop();
    cout<<st.size()<<endl;
    st.pop();
    return 0;
}