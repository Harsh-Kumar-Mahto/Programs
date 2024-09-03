//Insert at start & end.Search.Print 
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
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

void insertathead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
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

bool search(node* head,int key)
{
    while(head!=NULL)
    {
        if(head->data==key)
        {
            return 1;
        }
        head=head->next;
    }
    return 0;
}

int main()
{
    node* head=NULL;
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,3);
    display(head);
    cout<<endl;
    insertathead(head,0);
    display(head);
    if(search(head,7)==1)
    {
        cout<<"\nElement found";
    }
    else
    {
        cout<<"\nNot present";
    }

    return 0;
}