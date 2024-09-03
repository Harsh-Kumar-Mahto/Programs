#include<iostream>
using namespace std;
class node 
{
    public:
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};


//         1                      flattening                   1
//       /   \                      _______                     \ 
//      2     3                     _______                       2 
//             \                                                   \
//              4                                                    3
//                                                                    \
//      converting tree that is actually its preorder                  4

void flatten(node *root)
{
    if(root==NULL || (root->left==NULL && root->right==NULL))    //case in which nothing needs to be calculated
    {
        return;
    }
    if(root->left!=NULL)    //when left nodes are there and are to be flattened to right
    {
        flatten(root->left);      //recursively flattening left first and then right
        node* temp=root->right;   //storing right node to temp as left node needs to be attached first
        root->right=root->left;   //connecting left to right of node 
        root->left=NULL;          //changing left of node as NULL
        node* t=root;             //making a temp variable and using loop to get the end of the new right
        while(t->right!=NULL)
        {
            t=t->right;
        }
        t->right=temp;            //adding previous right to the end of new right
    }
    flatten(root->right);         //recursively flattening the right 
}

int main()
{
    node* root=new node(4);
    root->left=new node(9);
    root->right=new node(5);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right->right=new node(6);
    flatten(root);
    while(root!=NULL)
    {
        cout<<root->data<<" ";
        root=root->right;
    }
}