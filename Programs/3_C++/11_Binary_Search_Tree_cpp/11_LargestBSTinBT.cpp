#include<iostream>
#include<climits>
using namespace std;
struct node
{
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

struct Info           //a structure to store various data items for each node
{
    int size;   //actual size of the tree
    int max;    //max value node can have 
    int min;    //min value node can have
    int ans;    //answer till now
    bool isBST; //check for BST
};

Info largestBST(node* root)        //function that will return the answer  
{
    if(root==NULL)                //base case when root is NULL,size is 0,max is the min value possible and min is the max value possible,ans is 0 as size is 0 and it is a BST
    {
        return{0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left==NULL && root->right==NULL)  //if at leaf node or single node tree. size will be 1,min and max values will be same as root's data,ans will be 1 and it is a BST
    {
        return{1,root->data,root->data,1,true};
    }
  
    Info leftInfo=largestBST(root->left);    //checking for the left subtree
    Info rightInfo=largestBST(root->right);  //similarly for right subtree
    Info curr;                               //to incorporate present node
    curr.size=(1+leftInfo.size+rightInfo.size); //actual size i.e. left+right+root(1);
    if(leftInfo.isBST && rightInfo.isBST && root->data>leftInfo.max && root->data<rightInfo.min)  //if all condition satisfied that means curr node with left and right is a BST
    {
        curr.min=min(leftInfo.min,min(rightInfo.min,root->data));  //change min to min of left,right and root's data
        curr.max=max(leftInfo.max,max(rightInfo.max,root->data));  //change max to max of left,right and root's data
        curr.ans=curr.size;                                        //curr size will be the size of max BST i.e. ans
        return curr;
    }

    curr.ans=max(leftInfo.ans,rightInfo.ans);    //if not satisfying BST conditions,ans will be the max length of BST in left or right 
    curr.isBST=false;                             //current BST is false
    return curr;
}

int main()
{
    node* root=new node(15);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(5);
    cout<<"Largest BST in BT:"<<largestBST(root).ans;
    return 0;
}