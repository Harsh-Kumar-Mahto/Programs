#include<iostream>
using namespace std;
 
class node
{
    public:
    int data;
    node* left;
    node*right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* BST(node*root,int val)
{
    if(root==NULL)    //When we reach the empty space,new node will be created
    {
        return new node(val);
    }
    if(val<root->data)   //If value is less than root than new node will be in left
    {
        root->left=BST(root->left,val);
    }
    if(val>root->data)  //Otherwise right
    {
        root->right=BST(root->right,val);
    }
    return root;  //returning the root node for tracking
}

node* search(node* root,int k)
{
    if(root==NULL)       //no element further
    {
        return NULL;
    }
    if(root->data==k)   //element found
    {
        return root;
    }
    if(k<root->data)  
    {
        return search(root->left,k);
    }
    if(k>root->data)
    {
        return search(root->right,k);
    }
}

int main()
{
    node* root=NULL;
    root=BST(root,3);
    BST(root,2);
    BST(root,1);
    BST(root,7);
    BST(root,5);
    BST(root,4);
    BST(root,6);
    BST(root,8);
    node* v=search(root,26);
    if(v!=NULL)
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element not found";
    }
    return 0;
}