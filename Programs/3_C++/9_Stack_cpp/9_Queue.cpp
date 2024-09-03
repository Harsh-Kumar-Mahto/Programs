// Array implementation of queue
#include<iostream>
using namespace std;

#define n 10

class q
{
    int front;
    int back;
    int *arr;
    public:
    q()
    {
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void enq(int value)
    {
        back++;
        if(back==n-1)
        {
            cout<<"Queue full"<<endl;
            return;
        }
        if(front==-1)
        {
            front=0;
        }
        arr[back]=value;
    }

    void deq()
    {
        if(front==-1 || front>back)  //if deleted all the elements front will exceed back
        {
            cout<<"No elements in queue"<<endl;
            front=-1;
            return;
        }
        front++;
    }

    void peak()
    {
        cout<<arr[front]<<endl;
    }

    int empty()
    {
        if(front==-1)
        {
            return 1;
        }
        return 0;
    }

    void display()
    {
        for(int i=front;i<=back;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    q Q;
    Q.enq(1);
    Q.enq(2);
    Q.enq(3);
    Q.enq(4);
    Q.enq(5);
    Q.enq(6);
    Q.display();
    Q.deq();
    Q.display();
    Q.peak();
    cout<<Q.empty();
}