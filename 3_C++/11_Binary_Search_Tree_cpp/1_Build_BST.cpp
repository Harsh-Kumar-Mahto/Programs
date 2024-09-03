// 1.keys in the left are smaller than the root
// 2.keys in the right are greater than the root
// 3.left and right subtree must also be BST with no duplicacy
// 4.Inorder of BST gives a sorted sequence of numbersN

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

void printIn(node* root)
{
    if(root==NULL)
    {
        return;
    }
    printIn(root->left);
    cout<<root->data<<" ";
    printIn(root->right);
}

int main()
{
    node* root=NULL;
    root=BST(root,5);
    BST(root,1);
    BST(root,3);
    BST(root,4);
    BST(root,2);
    BST(root,7);
    printIn(root);
    return 0;
}