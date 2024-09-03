#include<iostream>
#include<queue>
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

int SumAtLevel(node* root,int k)
{
    if(root==NULL)
    {
        return -1;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    int sum=0, count=0;
    while(!q.empty())
    {
        node* front = q.front();
        q.pop();
        // checking a level and pushing left and right of front
        if(front!=NULL)
        {
            if(count==k)
            {
                sum+=front->data;
            }
            if(front->left!=NULL)
            {
                q.push(front->left);
            }
            if(front->right!=NULL)
            {
                q.push(front->right);
            }
        }
        // when a level ends,we increase the count which is the number of level & pop NULL and push at the end 
        else if(!q.empty())
        {
            q.push(NULL);
            count++;
        }
    }
    if(count<k)
    {
        return -1;
    }
    return sum;
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
    cout<<SumAtLevel(root,2);
    return 0;
}
