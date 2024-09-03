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

int length(node* head)
{
    int l=0;
    node* temp=head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}

void intersect(node* &head1,node* &head2,int pos)
{
    node*temp1=head1;
    pos--;
    while(pos--)
    {
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

int intersection(node* h1,node*h2)
{
    int l1=length(h1);
    int l2=length(h2);
    int d=0;
    node* temp1;
    node* temp2;
    if(l1<l2)
    {
        d=l2-l1;
        temp1=h2;
        temp2=h1;
    }
    else
    {
        d=l1-l2;
        temp1=h1;
        temp2=h2;
    }
    for(int i=0;i<d;i++)
    {
        if(temp1==NULL)
        {
            return -1;
        }
        temp1=temp1->next;
    }

    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1==temp2)
        {
            return temp1->data;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return -1;
}



int main()
{
    node* head1=NULL;
    insertatend(head1,1);
    insertatend(head1,2);
    insertatend(head1,3);
    insertatend(head1,4);
    insertatend(head1,5);
    insertatend(head1,6);
    node* head2=NULL;
    insertatend(head2,9);
    insertatend(head2,10);
    intersect(head1,head2,3);
    display(head1);
    cout<<endl;
    display(head2);
    cout<<endl;
    cout<<intersection(head1,head2);
    return 0;
}