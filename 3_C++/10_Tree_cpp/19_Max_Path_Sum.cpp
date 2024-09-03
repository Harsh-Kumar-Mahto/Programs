// Little issue with answer depending on cases

// #include<iostream>
// #include<math.h>
// using namespace std;
// class node
// {
//     public:
//     int data;
//     node*left;
//     node*right;
//     node(int val)
//     {
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// int maxSum(node*root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     int ans=INT_MIN;
//     int l=maxSum(root->left);    //calculating max sum in left subtree
//     int r=maxSum(root->right);   //for right subtree
//     ans=max(ans,(max(root->data,max(root->data+l,max(root->data+r,root->data+l+r)))));  //answer will be max of early ans,data,left+data,right+data and left+right+data
//     int singlePathsum = max(root->data, max(root->data + l, root -> data + r));   //max sum at node that leaves scope for adding ancestors
//     return singlePathsum;}

// int main()
// {
//     node*root=new node(-1);
//     root->left=new node(-12);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->right->left=new node(5);
//     root->right->right=new node(-6);
//     cout<<maxSum(root);
// }

// code in video 

#include <iostream>
#include <climits>
using namespace std;

typedef struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = NULL;
        right  = NULL;
    }
}node;

int maxPathAumUtil(Node *root, int &ans){  
    if(root == NULL){
        return 0;
    }
    
    int left = maxPathAumUtil(root -> left, ans);    //max sum for left
    int right= maxPathAumUtil(root -> right, ans);   //max sum for right

    int nodeMax = max(max(root->data, root->data + left + right),
                  max(root->data+ left, root->data + right));   //max sum passing through that node
    ans = max(ans, nodeMax);                                   //max of prev answer and max possible node sum
                  
    int singlePathsum = max(root->data, max(root->data + left, root -> data + right));   //max sum at node that leaves scope for adding ancestors
    return singlePathsum;                                                               //that is why "data+l+r" is removed.for calculation in next call
}

int maxPathSum(Node *root){
    
    int ans = INT_MIN;
    maxPathAumUtil(root, ans);
    return ans;
}

int main()
{
    node*root=new node(-1);
    root->left=new node(-12);
    root->right=new node(3);
    root->left->left=new node(4);
    root->right->left=new node(5);
    root->right->right=new node(-6);
    
    // test 
    cout<<maxPathSum(root);
    
    return 0;
}