// Dia of a tree is the number of nodes in the longest path between any 2 leaves
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

// FOLLOWING APPROACH HAS TIME COMPLEXITY OF O[n^2] SO BELOW IS MORE OPTIMIZED WAY
// int CalcHeight(node*root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     return (max(CalcHeight(root->left),CalcHeight(root->right))+1);
// }

// int CalcDia(node* root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     int lheight=CalcHeight(root->left);
//     int rheight=CalcHeight(root->right);
//     int currdia=lheight+rheight+1;
//     return max(currdia,max(CalcDia(root->left),CalcDia(root->right)));
// }

// O[n] complexity
int CalcDia(node*root,int *height)
{
    if(root==NULL)
    {
        *height=0;
        return 0;
    }
    int lh=0,rh=0;
    int ldia=CalcDia(root->left,&lh);
    int rdia=CalcDia(root->right,&rh);
    int currdia=lh+rh+1;
    *height=max(lh,rh)+1;\
    return max(currdia,max(ldia,rdia));
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
    int height=0;
    cout<<CalcDia(root,&height);
    return 0;
}
