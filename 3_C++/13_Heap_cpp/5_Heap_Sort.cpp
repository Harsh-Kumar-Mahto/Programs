// Perform sorting in a given heap
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right <= n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

// Given that the array is already heapified (max heap), if not, we have to first heapify
// 1-based heap indexing
// heap sort in itself has O(nlogn) complexity.n for while loop & log n for heapifying each time
void heapsort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        swap(arr[1], arr[size]); // Swap the first element with the last one
        size--;                  // Element at the last position is the largest
        // Heapify the array at index 1
        heapify(arr, size, 1);
    }
}

int main()
{
    int arr[] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    // Completely converting an array to a heap takes O(n) complexity
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    cout << "Max Heap: ";
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    heapsort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
