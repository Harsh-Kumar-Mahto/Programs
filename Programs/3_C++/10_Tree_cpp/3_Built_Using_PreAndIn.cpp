#include<iostream>
using namespace std;
// Tree building using preorder and inorder
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

int search(int in[],int start,int end,int cur)
{
    for(int i=start;i<=end;i++)
    {
        if(in[i]==cur)
        {
            return i;
        }
    }
    return -1;
}

node* buildtree(int pre[],int in[],int start,int end)
{
    static int idx=0;   //static so that only one instance is there and not everytime idx with 0 value is created
    if(start>end) //Base case
    {
        return NULL;
    }
    int curr=pre[idx];
    idx++;
    node* n=new node(curr);
    if(start==end)
    {
        return n;
    }
    int pos=search(in,start,end,curr);
    n->left=buildtree(pre,in,start,pos-1);
    n->right=buildtree(pre,in,pos+1,end);
    return n;
}

void inprint(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inprint(root->left);
    cout<<root->data<<" ";
    inprint(root->right);
}

int main()
{
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    node*root=buildtree(preorder,inorder,0,4);
    inprint(root);
    return 0;
}