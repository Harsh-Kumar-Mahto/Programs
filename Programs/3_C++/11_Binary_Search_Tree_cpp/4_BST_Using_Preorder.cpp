#include<iostream>
#include<climits>
using namespace std;

class node
{
public:
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Complexity O[n] as we are going to each element of the array
node* buildBST(int pre[], int* preidx, int k, int min, int max, int n)      //idx to track preorder,k is the current value to be inserted,min and max are limits of any node
{
    if (*preidx >= n)        //if array completed
    {
        return NULL;
    }
    node* root = NULL;
    if (k > min && k < max)    //if the new node to be added has value with limit of its parent
    {
        root = new node(k);   //construct the tree
        *preidx = *preidx + 1; //increase idx
        if (*preidx < n)        //if still array is not finished
        {
            root->left = buildBST(pre, preidx, pre[*preidx], min, k, n);   //check for the left of the node
        }
        if (*preidx < n)
        {
            root->right = buildBST(pre, preidx, pre[*preidx], k, max, n);   //then for the right of the node
        }
    }
    return root;
}

void in(node* root)
{
    if (root == NULL)
    {
        return;
    }
    in(root->left);
    cout << root->data << " ";
    in(root->right);
}

int main()
{
    int pre[] = {10, 2, 1, 13, 11};
    int preidx = 0;
    int n = 5;
    node* root = buildBST(pre, &preidx, pre[preidx], INT_MIN, INT_MAX, n);
    in(root);
    return 0;
}
