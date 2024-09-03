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

// Iterative way
node* merge(node* &h1,node* &h2)
{
    node* temp1=h1;
    node* temp2=h2;
    node* demo=new node(-1);
    node* temp3=demo;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data<temp2->data)
        {
            temp3->next=temp1;
            temp1=temp1->next;
        }
        else
        {
            temp3->next=temp2;
            temp2=temp2->next;
        }
        temp3=temp3->next;
    }
    while(temp1!=NULL)
    {
        temp3->next=temp1;
        temp1=temp1->next;
        temp3=temp3->next;
    }
    while(temp2!=NULL)
    {
        temp3->next=temp2;
        temp2=temp2->next;
        temp3=temp3->next;
    }
    return demo->next;
}

// Recursive way
node* recurse(node* &h1,node* &h2)
{
    if(h1==NULL)
    {
        return h2;
    }
    if(h2==NULL)
    {
        return h1;
    }
    node* result;
    if(h1->data < h2->data)
    {
        result=h1;
        result->next=recurse(h1->next,h2);
    } 
    else
    {
        result=h2;
        result->next=recurse(h1,h2->next);
    }
    return result;
}


int main()
{
    node* head1=NULL;
    insertatend(head1,1);
    insertatend(head1,3);
    insertatend(head1,5);
    insertatend(head1,7);
    display(head1);
    cout<<endl;
    node* head2=NULL;
    insertatend(head2,2);
    insertatend(head2,4);
    insertatend(head2,6);
    display(head2);
    cout<<endl;
    display(merge(head1,head2));      //one will work at a time
    // display(recurse(head1,head2));
    return 0;
}