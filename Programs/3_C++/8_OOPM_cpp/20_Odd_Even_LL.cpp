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
    cout<<"NULL"<<endl;
}

void arrange(node* &head)
{
    node* odd = head;
    node* even = head->next;
    node* evenStart = even;
    while(odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        if(odd->next != NULL)
        {
            even->next = odd->next;
            even = even->next;
        }
    }
    odd->next = evenStart;
    if(even->next != NULL)
    {
        even->next = NULL;
    }
}

int main()
{
    node* head=NULL;
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    insertatend(head,5);
    display(head);
    arrange(head);
    display(head);

    return 0;
}
