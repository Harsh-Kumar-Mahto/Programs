// Check whether a given binary tree a maxheap or not
// For this check whether the tree is CBT or not then check if its left and right are lesser than root or not
// Recursively repeat this process.
// Actual program(Lecture 75: 28 mins)

// This question below is not checking BT to be heap
// This question is checking if the array given is in heapified order or not
#include <iostream>
using namespace std;

bool isHeap(int arr[], int n)
{
    for (int i = (n / 2) - 1; i >= 0; i--)
    {                          // In 0 based indexing n/2 to n nodes are leaves and we are checking here from the very lowest parent
        int left = 2 * i + 1;  // left child of parent
        int right = 2 * i + 2; // right child of parent
        if ((left < n && arr[i] < arr[left]) || (right < n && arr[i] < arr[right]))
        { // if left and right are within limits and any of then is greater than the parents value, this means it is not heap
            return false;
        }
    }
    return true; // if the for loops completes this means at every node left and right nodes have lesser value than parent and is a heap
}

int main()
{
    int n;
    cout << "Enter size:";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << "Enter array elements:";
        }
        cin >> arr[i];
    }
    if (isHeap(arr, n))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}