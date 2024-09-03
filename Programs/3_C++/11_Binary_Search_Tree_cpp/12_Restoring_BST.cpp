//Binary tree is disturbed as we swapped two numbers and now we have to fix the tree

#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*left;
    node*right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

// 2 Cases come:
// Case 1-When they are far:We will swap first with last
// Case 2-When swapped number are next to each other:we will swap first with mid and last will be NULL

// 2nd case:{1,8,3,4,5,6,7,2}
// first:previous node where first number is less than previous [8]
// mid:node where first number is less than previous [3]
// last:second node where number is less than previous [2]
// prev:is used to compare data of node with prev


void calcPointers(node*root,node **first,node **mid,node **last,node **prev)
// This function will calculate all the pointers using inorder treaversal using property that it must be sorted
{
    if(root==NULL)
    {
        return ;
    }
    calcPointers(root->left,first,mid,last,prev);  //Caluclating pointers starting from left as we traverse inorder
    if((*prev) && root->data < (*prev)->data)
    {
        if(!*first)  //this condition means if first is NULL that means this is the first time prop is violated
        {
            *first=*prev;
            *mid=root;
        }
        else  //else this is the second time prop is violated. This will only come in case 1 when element are far otherwise last will remain NULL
        {
            *last=root;
        }
    }
    *prev=root;
    calcPointers(root->right,first,mid,last,prev);   //lastly traversing the right
}

void Swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void restoreBST(node* root)
{
    node* first,*mid,*last,*prev;
    first=NULL;
    mid=NULL;
    last=NULL;
    prev=NULL;
    calcPointers(root,&first,&mid,&last,&prev);
    // case 1:When swapped numbers are far,we swap the first and last
    if(first && last)
    {
        Swap(&(first->data),&(last->data));
    }
    // case 2:Swapped numbers are next to each other,we swap the first with mid 
    else if(first && mid)
    {
        Swap(&(first->data),&(mid->data));
    }
}

void in(node* root)
{
    if(root==NULL)
    {
        return;
    }
    in(root->left);
    cout<<root->data<<" ";
    in(root->right);
}

int main()
{
    node* root=new node(6);
    root->left=new node(9);
    root->right=new node(3);
    root->left->left=new node(1);
    root->left->right=new node(4);
    root->right->right=new node(13);
    in(root);
    cout<<endl;
    restoreBST(root);
    in(root);
    cout<<endl;
}