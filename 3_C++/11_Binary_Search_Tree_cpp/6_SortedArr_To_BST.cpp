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

// Building a BST from a sorted array
// Similar to binary search approach
node* sortedArrToBST(int arr[],int low,int high)
{
    if(low>high)      //Base case to stop
    {
        return NULL;
    }
    int mid=(low+high)/2; //Finding the mid and making it our root node
    node* root=new node(arr[mid]);
    root->left=sortedArrToBST(arr,low,mid-1);  //recursively building left subtree and right subtree
    root->right=sortedArrToBST(arr,mid+1,high);
    return root;
}

void pre(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    pre(root->left);
    pre(root->right);
}

int main()
{
    int arr[]={10,20,30,40,50};
    node* root=sortedArrToBST(arr,0,4);
    pre(root);
    return 0;
}