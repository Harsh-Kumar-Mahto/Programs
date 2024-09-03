// HARE & TURTLE algorithm or Floyd's algorithm
// Proof in video
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

void insertatend(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

void makecycle(node*head,int pos)
{
    node*temp=head;
    node*start;
    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            start=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=start;
}

bool detectcycle(node* &head)
{
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return 1;
        }
    }
    return 0;
}

// We know that it is a cycle
void removecycle(node* &head)
{
    node* slow=head;
    node* fast=head;
    do
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    while(slow->next!=fast->next);
    fast=head;
    while(slow->next!=fast->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
}

int main()
{
    node* head=NULL;
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    insertatend(head,5);
    insertatend(head,6);
    makecycle(head,3);
    cout<<detectcycle(head)<<endl;
    removecycle(head);
    display(head);
    cout<<endl<<detectcycle(head);
    return 0;
}