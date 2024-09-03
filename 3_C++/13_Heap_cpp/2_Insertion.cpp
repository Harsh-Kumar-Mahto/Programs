// Insert a new node inside a max heap
#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;  // increase the size of heap
        int index = size; // store the new index in a temporary variable
        arr[index] = val; // insert value in the new index
        while (index > 1)
        {                           // check for base condition that index must be greater than 1
            int parent = index / 2; // using property of parent at (i/2) index
            if (arr[parent] < arr[index])
            {                                  // check if value at index is greater than that of paren
                swap(arr[parent], arr[index]); // if yes,swap the values
                index = parent;
            } // otherwise return as the new element is at perfect index
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
    }
};

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.insert(57);
    h.print();
    return 0;
}