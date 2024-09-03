// Heaps can be implemented using priority queues
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // By defualt priority queue implements maxheap
    priority_queue<int, vector<int>> maxheap;
    maxheap.push(4);
    maxheap.push(2);
    maxheap.push(5);
    maxheap.push(3);

    cout << maxheap.top() << endl;
    maxheap.pop();
    cout << maxheap.size() << endl;
    cout << maxheap.top() << endl;

    // For minheap we need to write greater<int>
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout << minheap.top() << endl;
    cout << minheap.size() << endl;
    minheap.pop();
    cout << minheap.top() << endl;
}