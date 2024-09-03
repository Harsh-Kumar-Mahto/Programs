#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*left;
    node*right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

bool identical(node* root1,node*root2)
{
    bool eq,l,r;
    if(root1==NULL && root2==NULL)   //Base condition 1 when we are at leaf nodes of both and till now equal
    {
        return 1;
    }
    else if(root1==NULL || root2==NULL) //When we reach to node when only one of them is NULL we return 0;
    {
        return 0;
    }
    else                               //All three main cases are checked here
    {
        eq=(root1->data == root2->data);       //Case 1:data at nodes must be equal 
        l=identical(root1->left,root2->left);  //Case 2:left must be identical
        r=identical(root1->right,root2->right);//Case 3:Right must also be identical
    }
    return eq and l and r;     //if all the three cases are true then only the result will be true otherwise it will return false
}
// Same code to check for any tree,not necessarily BST
int main()
{
    node* root1=new node(12);
    root1->right=new node(15);
    root1->left=new node(9);
    root1->left->left=new node(5);
    root1->left->right=new node(10);
    node* root2=new node(12);
    root2->right=new node(15);
    root2->left=new node(9);
    root2->left->left=new node(5);
    root2->left->right=new node(1);
    if(identical(root1,root2))
    {
        cout<<"BSTs Identical";
    }
    else
    {
        cout<<"BSTs not Identical";
    }
    return 0;
}