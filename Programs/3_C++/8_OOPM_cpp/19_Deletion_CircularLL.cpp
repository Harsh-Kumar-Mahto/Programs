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


void insertatend(node* &head,int num)
{
    node* n=new node(num);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void display(node* head)
{
    node* temp=head;
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    while(temp!=head);
    cout<<"NULL";
    cout<<endl;
}

void deletion(node* &head,int pos)
{
    node* temp;
    node* del=head;
    int count=1;
    if(pos==1)
    {
        do
        {
            temp=del;
            del=del->next;
        }
        while(del!=head);
        temp->next=del->next;
        head=head->next;
        delete(del);
        return;
    }
    while(count!=pos)
    {
        temp=del;
        del=del->next;
        count++;
    }
    temp->next=del->next;
    delete(del);
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
    display(head);
    deletion(head,1);
    display(head);

}