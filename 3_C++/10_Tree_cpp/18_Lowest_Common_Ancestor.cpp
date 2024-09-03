#include<iostream>
#include<vector>    //save the path of traversal
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

bool getpath(node* root,int k,vector<int> &path)    //function to check whether path exits or not
{
    if(root==NULL)       //base condition
    {
        return 0;
    }
    path.push_back(root->data);   //entering the node to path
    if(root->data==k)    //path to the node found / first node is the required one
    {
        return 1;
    }
    if(getpath(root->left,k,path) ||getpath(root->right,k,path))    //checking left and right,if anyone of them has path or not 
    {
        return 1;                  //if any of them has the root return true
    }
    path.pop_back();               //if nowhere found,remove the last element added to path
    return 0;                      //last condition if not found 
}

int LCA(node* root,int n1,int n2)
{
    vector<int>path1,path2;   //paths for both nodes from the root
    if(!getpath(root,n1,path1)||!getpath(root,n2,path2))   //if either of the paths doesn't exists,no LCA exists
    {
        return -1;
    }
    int pc; //pathchange
    for(pc=0;pc<path1.size() && path2.size();pc++)    //checking both the paths together and finding the diversion point
    {
        if(path1[pc]!=path2[pc])      //when diversion found,break the loop
        {
            break;
        }
    }
    return path1[pc-1];    //path2[pc-1] also correct,pc-1 as at pc values are different so the diversion is one node before 
}

// faster approach taking LCA exists
node* LCA2(node* root,int n1,int n2)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==n1 || root->data==n2)   //If root is one of the nodes then automatically it is the LCA
    {
        return root;
    }
    node* lcaleft=LCA2(root->left,n1,n2);   //checking left of root 
    node* lcaright=LCA2(root->right,n1,n2); //checking right of root
    if(lcaleft && lcaright)                 //When recursively calling and lca of left and right both not NULL,and current root will be the LCA
    {
        return root;
    }
    if(lcaright!=NULL)   //if lca of right not NULL than it is the lca otherwise right.The point when both not NULL,above condition is true
    {
        return lcaright;
    }
    return lcaleft;
}

int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->right=new node(3);
    root->right->left=new node(5);
    root->right->left->left=new node(7);
    root->right->right=new node(6);
    if(LCA(root,7,6)==-1)
    {
        cout<<"LCA doesn't exist";
    }
    else
    {
        cout<<"LCA is:"<<LCA(root,7,6);
    }
    
    node* lca=LCA2(root,7,6);
    cout<<endl<<"LCA is:"<<lca->data;
    return 0;
}