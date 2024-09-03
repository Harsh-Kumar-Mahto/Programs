// First approach will be by directly sorting the array
// Second approach:
// We make a maxheap of first k elements
// After that we compare the rest of the array elements one by one,if its value is less than top of the heap
// pop the top and insert the new element,eventually the heap will contain k smallest numbers and the top will be the largest of all i.e kth smallest

// If we have to find kth largest element, we will use min heap with same approach

#include <iostream>
#include <queue>
using namespace std;

int KthSmallest(int arr[], int n, int k)
{
    priority_queue<int> maxheap; // making maxheap
    for (int i = 0; i < k; i++)
    { // enter first k elements in heap
        maxheap.push(arr[i]);
    }
    for (int i = k; i < n; i++)
    { // check for rest of the elements
        if (maxheap.top() > arr[i])
        {                  // if array element is less
            maxheap.pop(); // pop the top of the heap and insert the element
            maxheap.push(arr[i]);
        }
    }
    return maxheap.top(); // at last top of the heap is our answer
}

int main()
{
    int n;
    cout << "Enter size:";
    cin >> n;
    int arr[n];
    cout << "Enter array elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter k:";
    cin >> k;
    cout << "Kth smallest element:" << KthSmallest(arr, n, k);
    return 0;
}