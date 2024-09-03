#include<iostream>
#include<stack>
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

void ZigZag(node* root)
{
    if(root==NULL)
    {
        return;
    }
    stack<node*>curr;    //Using two stacks,as pattern needs to be altered each time
    stack<node*>next;
    bool leftToRight=true; //starting with left to right and changing it after each level i.e when curr stack becomes empty
    curr.push(root);    //starting from the root node in curr stack 
    while(!curr.empty())  //checking if curr stack is empty i.e end of the tree
    {
        node* t=curr.top();  //storing top of the stack in a temp node to perform operations
        curr.pop();         //poping out the actual node
        if(t)                //if the temp node is not empty
        {
            cout<<t->data<<" ";  //print its data
            if(leftToRight)   //if left to right is true
            {
                if(t->left)   //first check and insert left of temp into the next stack
                {
                    next.push(t->left);
                }
                if(t->right)   //then check and insert right of temp in the next stack
                {
                    next.push(t->right);
                }
            }
            else    //otherwise
            {
                if(t->right)  //first check and insert right of temp into the next stack
                {
                    next.push(t->right);
                }
                if(t->left)    //then check and insert left of temp into the next stack
                {
                next.push(t->left);
                }
            }
        }
        if(curr.empty())   //if after the completion of above process,curr stack becomes empty,change direction and swap curr and next
        {
            leftToRight=!leftToRight;
            swap(curr,next);
        }
    }

}

int main()
{
        //       12
        //      /  \
        //     9    15
        //    / \
        //   5   10  
    node* root=new node(12);
    root->right=new node(15);
    root->left=new node(9);
    root->left->left=new node(5);
    root->left->right=new node(10);
    ZigZag(root);
    cout<<endl;
}