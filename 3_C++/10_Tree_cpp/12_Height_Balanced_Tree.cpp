// It is tree where at every node difference between 
// height of its left subtree and right subtree is less than or equal to 1
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

// O[n^2] complexity
// int height(node* root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     return max(height(root->left),height(root->right))+1;
// }

// bool Balanced(node* root)
// {
//     if(root==NULL)
//     {
//         return 1;
//     }
//     if(abs(height(root->left)-height(root->right))<=1  && Balanced(root->left) && Balanced(root->right))
//     {
//         return 1;
//     }
//     return 0;
// }

// O[n] complexity approach
// Height is not being calculated each time,common height pointer is taking care of height
bool Balanced(node* root,int *height)
{
    int lh=0,rh=0;
    if(root==NULL)
    {
        *height=0;
        return 1;
    }
    bool l=Balanced(root->left,&lh);
    bool r=Balanced(root->right,&rh);
    *height=max(lh,rh)+1;
    if(abs(lh-rh)<=1  && l && r)
    {
        return 1;
    }
    return 0;
}

int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->left->right=new node(5);
//         1
//        /  \
//       2     3
//     /  
//    4
//     \
//      5
    int height=0;
    if(Balanced(root,&height))
    {
        cout<<"Tree is balanced";
    }
    else
    {
        cout<<"Tree is not balanced";
    }
    return 0;
}