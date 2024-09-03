// Linked implementation of queue
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};

class q
{
    node* front;
    node* back;
    public:
    q()
    {
        front=NULL;
        back=NULL;
    }

    void enq(int val)
    {
        node*temp=new node(val);
        if(front==NULL)
        {
            front=temp;
            back=temp;
            return;
        }
        back->next=temp;
        back=back->next;
        back->next=NULL;
    }

    void deq()
    {
        if(front==NULL)
        {
            cout<<"Queue Empty"<<endl;
            return;
        }
        node* temp=front;
        front=front->next;
        delete temp;
    }

    int peek()
    {
        if(front==NULL)
        {
            cout<<"Queue Empty"<<endl;
            return 0;
        }
        return front->data;
    }

    bool empty()
    {
        if(front==NULL)
        {
            return 1;
        }
        return 0;
    }

    void display()
    {
        node*temp=front;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
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
    Q.display();
    Q.deq();
    Q.display();
    cout<<Q.peek()<<endl;;
    cout<<Q.empty()<<endl;
}