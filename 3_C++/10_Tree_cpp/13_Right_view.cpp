#include<iostream>
#include<queue>
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

void rightview(node* root)
{
    queue<node*> q;
    if(root==NULL)
    {
        return;
    }
    q.push(root);
    // Level order traversal and printing the last element of queue
    // More explanation in next one,just printing the last element in the queue at each level i.e last element of every for loop 
    while(!q.empty())
    {
        int n=q.size();
        for(int i=0;i<n;i++)
        {
            if(i==n-1)
            {
                cout<<q.front()->data<<" ";
            }
            if(q.front()->left!=NULL)
            {
                q.push(q.front()->left);
            }
            if(q.front()->right!=NULL)
            {
                q.push(q.front()->right);
            }
            q.pop();
        }
    }
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
    rightview(root);
}