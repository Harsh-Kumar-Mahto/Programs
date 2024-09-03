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

node* inorderSucc(node* root)   //function to find the inorder successor of the node 
{
    node* curr=root;
    while(curr && curr->left!=NULL)  //repeately substituting the left of the left subtree until it reaches ot leaves as in inorder left comes first
    {
        curr=curr->left;
    }
    return curr;
}

node* deleteInBST(node*root,int k)
{
    if(root->data > k)  //finding in the left subtree and replacing the new left subtree with old one
    {
        root->left=deleteInBST(root->left,k);   
    }
    else if(root->data < k)  //doing above for the right subtree
    {
        root->right=deleteInBST(root->right,k);
    }
    else  //element found
    {
        // Combining 2(a) and 2(b) we get case 1 of deleting leaf node that has NULL both sides and we simple have to free it
        if(root->left==NULL)  //case 2(a): directly delete the node and attach its one and only subtree to the main tree
        {
            node*temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)   //case 2(b):same as 1
        {
            node*temp=root->left;  
            free(root);
            return temp;
        }
        else  //case 3 where some adjustment is required
        {
            node* temp=inorderSucc(root->right);  //finding the successor of the required number in the inorder sequence and storing in temp
            root->data=temp->data;     //replacing the value that needs to be deleted with its successor value stored in temp
            root->right=deleteInBST(root->right,temp->data);  //deleting the actual successor node i.e why taking only the right subtree and root also has the same value
        }
    }
    return root;
}


void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    node* root=NULL;
    root=BST(root,4);
    BST(root,2);
    BST(root,1);
    BST(root,3);
    BST(root,5);
    BST(root,6);
    inorder(root);
    cout<<endl;
    deleteInBST(root,2);
    inorder(root);
    return 0;
}