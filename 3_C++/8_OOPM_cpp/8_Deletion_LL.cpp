// Different deletions
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

void deletion(node* &head,int value)
{
    node* del=head;
    node* temp=del;

    if(head==NULL)  //No nodes
    {
        return;
    }
    
    if(head->data==value)   //delete first node
    {
        head=head->next;
        delete del;
        return;
    }
    while(del!=NULL)   //delete any middle node
    {
        if(del->data==value)
        {
            temp->next=del->next;
            delete del;
            return;
        }
        temp=del;
        del=del->next;
    }
}

int main()
{
    node* head=NULL;
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    display(head);
    cout<<endl;
    deletion(head,3);
    display(head);
    cout<<endl;
    deletion(head,1);
    display(head);

    return 0;
}