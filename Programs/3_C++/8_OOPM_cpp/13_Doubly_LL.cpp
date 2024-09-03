#include<iostream>
using namespace std;
class node
{
    public:
    node* prev;
    int data;
    node* next;
    node(int val)
    {
        data=val;
        prev=NULL;
        next=NULL;
    }
};

void insertathead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }
    head=n;
}

void insertatend(node* &head,int val)
{
    node* temp=head;
    node* n=new node(val);
    if(head==NULL)    //For the very first element
    {
        insertathead(head,val);
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}

int main()
{
    node* head=NULL;
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    insertatend(head,5);
    insertathead(head,0);
    display(head);
    return 0;
}