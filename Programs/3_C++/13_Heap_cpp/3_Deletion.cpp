// Delete the root node from a max heap
// Insertion and deletion in heap take O(log n) complexity as we are doing n/2 everytime
#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size;

    Heap()
    {
        size = 0;
        arr[0] = -1;
    }

    void insert(int val)
    {
        size++;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[index] > arr[parent])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }

    void del()
    {
        if (size == 0)
        {
            cout << "Nothing to delete";
            return;
        }
        arr[1] = arr[size]; // Swap the root and the last element
        size--;             // Reduce the size of the array by 1, eventually removing the last element (which currently is the root)
        int i = 1;          // store the index of new root in i
        while (i < size)
        {
            int leftIdx = 2 * i;                                                                          // for left child
            int rightIdx = 2 * i + 1;                                                                     // for right child
            if ((arr[i] < arr[leftIdx] && leftIdx < size) || (arr[i] < arr[rightIdx] && rightIdx < size)) // if present element is less than any of the childs checking the conditions for overflow of childs
            {
                if (arr[leftIdx] > arr[rightIdx]) // checking greater of he childs and swapping the present node with it followed by the updation of its index with the child with which it has been swapped
                {
                    swap(arr[i], arr[leftIdx]);
                    i = leftIdx;
                }
                else
                {
                    swap(arr[i], arr[rightIdx]);
                    i = rightIdx;
                }
            }
            else // if none of the childs is greater,this means the heap is perfectly max heap and no need to do anything
            {
                return;
            }
        }
    }
};

int main()
{
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.insert(57);
    h.print();
    h.del();
    h.print();
    return 0;
}