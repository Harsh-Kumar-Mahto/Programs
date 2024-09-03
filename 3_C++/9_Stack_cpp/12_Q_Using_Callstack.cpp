// Recursive stack calls
#include<iostream>
#include<stack>
using namespace std;

class q
{
    stack<int> s1;
    public:

    void enq(int val)
    {
        s1.push(val);
    }

    int deq()
    {
        if(s1.empty())
        {
            cout<<"Queue empty"<<endl;
            return -1;
        }
        int x=s1.top();
        s1.pop();
        if(s1.empty())
        {
            return x;
        }
        int ans=deq();
        s1.push(x);
        return ans;
    }

    bool empty()
    {
        if(s1.empty())
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