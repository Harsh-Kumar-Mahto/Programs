#include<iostream>
#include<stack>
using namespace std;

class q
{
    stack<int> s1;
    stack<int> s2;
    public:

    void enq(int val)
    {
        s1.push(val);
    }

    int deq()
    {
        if(s1.empty() && s2.empty())
        {
            cout<<"Queue empty"<<endl;
            return -1;
        }
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval=s2.top();
        s2.pop();
        return topval;
    }

    bool empty()
    {
        if(s1.empty() && s2.empty())
        {
            return 1;
        }
        return 0;
    }
};

int main()
{
    q Q;
    Q.enq(1);
    Q.enq(2);
    Q.enq(3);
    Q.enq(4);
    cout<<Q.deq()<<endl;
    Q.enq(5);
    cout<<Q.deq()<<endl;
    cout<<Q.deq()<<endl;
    cout<<Q.deq()<<endl;
    cout<<Q.deq()<<endl;
    cout<<Q.deq()<<endl;
}