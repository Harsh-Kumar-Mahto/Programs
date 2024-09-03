// Check again wrong answer

// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// deque<int>order;
// class Node
// {
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val)
//     {
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// void pre(Node* root)
// {
//     if(root==nullptr)
//     {
//         return;
//     }
//     order.push_back(root->data);
//     pre(root->left);
//     pre(root->right);
// }

// int main()
// {
//     Node* root=new Node(4);
//     root->left=new Node(2);
//     root->left->left=new Node(1);
//     root->left->right=new Node(3);
//     root->right=new Node(6);
//     root->right->left=new Node(5);
//     root->right->right=new Node(7);
//     pre(root);
//     priority_queue<int,vector<int>,greater<int>>pq;
//     while(!order.empty())
//     {
//         int a=order.front();
//         order.pop_front();
//         pq.push(a);
//     }
//     while(!pq.empty())
//     {
//         cout<<pq.top();
//         pq.pop();
//     }
//     return 0;
// }