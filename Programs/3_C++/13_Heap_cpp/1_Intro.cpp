// Heaps are binary tree based Data Structures but they need not to be balanced
// Heap is a complete binary tree:Every level must be completely filled except the last node
// Nodes always start adding from left
//  not completely filled      completely filled  (Both are valid heaps/complete Binary Tree)  
//         a                        a
//        / \                      / \
//       b   c                    b   c
//      / \                      / \ / \
//     d   e                    d  e f  g 
 
// 1.Max Heap:Root is always greater than its childs
//         6                     
//        / \               
//       4   5              
//      / \              
//     1   2       

// 2.Min Heap:Root is always less than its childs
//         1
//        / \
//       2   3
//      /
//     9 


// Consider an array with indices starting from 1
// For node at ith index,left child is at 2i and right child is at 2i+1 index.
// Parent of ith node is at i/2 index

// For 0 based indexing
// Parent is at i ,left child is at 2*i+1 & right child is at 2*i+2;