#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int v)
    {
        data=v;
        left=NULL;
        right=NULL;
    }
};

int search(int in[],int cur,int st,int end)
{
    for(int i=st;i<=end;i++)
    {
        if(in[i]==cur)
        {
            return i;
        }
    }
    return -1;
}

node* buildtree(int post[],int in[],int st,int end)
{
    static int idx=end;
    if(end<st)
    {
        return NULL;
    }
    int curr=post[idx];
    idx--;
    node* n=new node(curr);
    if(st==end)
    {
        return n;
    }
    int pos=search(in,curr,st,end);
    n->right=buildtree(post,in,pos+1,end);
    n->left=buildtree(post,in,st,pos-1);
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
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    node*root=buildtree(postorder,inorder,0,4);
    inprint(root);
    return 0;
}