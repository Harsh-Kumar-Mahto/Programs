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

// Queue is used and we push left and right node of front node in the queue and then pop the front
// When NULL pointer comes,we know that one level is completed so we pop it and push a NULL telling the end of another level
void leveltraverse(node* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        if(q.front()==NULL)
        {
            if(q.size()==1)
            {
               q.pop();
               return; 
            }
            q.pop();
            q.push(NULL); 
        }
        cout<<q.front()->data<<" ";
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

int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    leveltraverse(root);
}