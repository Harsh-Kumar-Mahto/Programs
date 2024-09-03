#include<iostream>
#include<queue>
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

// recursively calling function for left and right subtree and increasing the count by 1 each time when node is not NULL
int count(node* root)
{
    if(root==NULL)
    {
       return 0;
    }
    return (count(root->left)+count(root->right)+1);
}

int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<count(root);
    return 0;
}
