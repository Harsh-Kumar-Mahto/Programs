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
// We can't just compare left and right of a node to it value, we have to consider the whole subtrees
//        1     In above approach this will be considered a BST however it is not.
//       / \    So this approach is not valid,checking the min and max limits is required
//      2   4
//         / \
//        3   5
// O[n] as we are traversing to each node once
bool checkBST(node* root,node* min,node* max)
{ 
    if(root==NULL)   //single node or last node is by default a BST
    {
        return 1;
    }
    if(min!=NULL && root->data<=min->data)   //condition for non BST if there is some min and our data is less than it
    {
        return 0;
    }
    if(max!=NULL && root->data>=max->data)   //condition for non BST if there is some max and our data is greater than it
    {
        return 0;
    } 
    bool left=checkBST(root->left,min,root);  //checking for left subtree
    bool right=checkBST(root->right,root,max);  //for right subtree
    return left and right;   //if both true then only it will return true;
}

int main()
{
    node *root=new node(4);
    root->left=new node(2);
    root->right=new node(7);
    root->left->left=new node(1);
    root->right->right=new node(8);
    root->right->left=new node(3);
    if(checkBST(root,NULL,NULL))
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}