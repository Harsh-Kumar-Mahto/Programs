// Continue from lecture 97


// Kruskal's algo is also used to find minimum spanning tree.
// In this we use union by rank and path compression.

#include <iostream>
#include <map>
#include <stack>
#include <limits.h>
#include <vector>
using namespace std;

class Graph
{
public:
    map<int, vector<pair<int, int>>> adj;

    void addEdge(int u, int v, int weight)
    {
        pair<int, int> p(v, weight);
        adj[u].push_back(p);
    }
};


int main()
{
    Graph g;
    int m;
    cout << "Enter number of nodes: ";
    cin >> m;
    int n;
    cout << "Enter number of edges: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int u, v, weight;
        cout << "Enter edge (u v weight): ";
        cin >> u >> v >> weight;
        if (u >= m || v >= m)
        {
            cout << "Invalid node number!";
            return 0;
        }
        g.addEdge(u, v, weight);
    }

    vector<int>parent(n);
    vector<int>rank(n);

    return 0;
}
