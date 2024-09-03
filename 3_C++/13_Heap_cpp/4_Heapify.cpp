// Heapify a given array.
#include <iostream>
using namespace std;

// We will start from the right side of the array as in for loop inside main.
// nodes from n/2+1 to n are leaf nodes and they are always heap in themselves,so we start form n/2 and check if it is largest or not(in max heap)
// Checking a single present node and placing it at right position takes O(log n) complexity
void heapify(int arr[], int n, int i)
{
    int largest = i;       // present node(i) is taken as parent and it must be largest
    int left = 2 * i;      // this is its left child
    int right = 2 * i + 1; // this is its right child

    if (left <= n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right <= n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {                               // we check whether largest updated or not,if not this means everything is heapified and nothing to do
        swap(arr[largest], arr[i]); // if largest updated,this means parent node must be swapped with the largest of its child nodes
        heapify(arr, n, largest);   // and if above change is done so we need to check the below heap as it may be disturbed so we call heapify function for new largest changed value
    }
}

int main()
{
    int arr[] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    // completely convert an array to a heap takes O(n) complexity
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}