#include<iostream>
using namespace  std;
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

// Case 1:To print nodes that lie in the subtree i.e. below the node
void subtreeNodes(node*root,int k)
{
    if(root==NULL ||k<0)
    {
        return;
    }
    if(k==0)
    {
        cout<<root->data<<" ";
        return;
    }
    subtreeNodes(root->left,k-1);
    subtreeNodes(root->right,k-1);
}

// Case 2:To print nodes that are ancestoral using case 1

int NodesAtK(node* root,node *target,int k)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root==target)   
    {
        subtreeNodes(root,k);
        return 0;
    }
    
    int dl=NodesAtK(root->left,target,k);   //root has target in left subtree in that case 
    if(dl!=-1)                              //dl!=1 means target is there in left subtree
    {
        if(dl+1==k)                         //current node is at kth distance if this condition is true so print it
        {
            cout<<root->data<<" ";
        }
        else
        {                                   //now checking the subtrees in the right of the ancestor as target is in left
            subtreeNodes(root->right,k-dl-2); //-2 because once we earlier did root->left without decreasing distance and now for this thime
        }                                     //as with every ancestor the value of k is decremented by 1 
        return 1+dl;                        //increasing distance each time to repeat the same process for all ancestors
    }
    int dr=NodesAtK(root->right,target,k);  //same as above but here target is in right and hence we will check the left subtree of each node 
    if(dr!=-1)
    {
        if(dr+1==k)
        {
            cout<<root->data<<" ";
        }
        else
        {
            subtreeNodes(root->left,k-dr-2);
        }
        return 1+dr;
    }
    return -1;
}

int main()
{
    node *root=new node(1);
    root->left=new node(5);
    root->right=new node(2);
    root->left->left=new node(6);
    root->left->left->right=new node(7);
    root->left->left->right->left=new node(8);
    root->left->left->right->right=new node(9);
    root->right->left=new node(3);
    root->right->right=new node(4);
    NodesAtK(root,root->left,3);
}