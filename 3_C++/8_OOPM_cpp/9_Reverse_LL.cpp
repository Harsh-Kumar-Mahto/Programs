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

// Iterative method to reverse a linked list
node* reverse(node* &head)
{
    node* previous=NULL;
    node* current=head;
    node* next;
    while(current!=NULL)
    {
        next=current->next;
        current->next=previous;
        previous=current;
        current=next;
    }
    return previous;  //this will return the new head
}
// At a time only one reverse function works well second one gives wrong output
node* recurse(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead=recurse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
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
    // display(recurse(head));
    cout<<endl;
    display(reverse(head));

    return 0;
}