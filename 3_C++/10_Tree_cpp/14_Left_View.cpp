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

// O[n] complexity
void leftview(node* root)
{
    queue<node*> q;
    if(root==NULL)
    {
        return;
    }
    q.push(root);
    // level order traversal is used
    while(!q.empty())
    {
        int n=q.size();
        for(int i=0;i<n;i++)  //q size is rechecked after each level i.e after completion of for loop indicating level completion
        {
            // First element of row is printed each time
            if(i==0)
            {
                cout<<q.front()->data<<" ";   
            }
            if(q.front()->left!=NULL)   //normally traversing left and right of each node and pushing in stack
            {
                q.push(q.front()->left);
            }
            if(q.front()->right!=NULL)
            {
                q.push(q.front()->right);
            }
            q.pop(); //poping the node whose childs are already pushed i.e a new level
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
    leftview(root);
}