// Prim's algorithm is an algo which is used to find the minimum spanning tree
// Spanning tree is graph converted to tree(Acyclic) that has n nodes and n-1 edges & also each node is reachable by every other node
// A graph can have multiple spanning trees
// Minimum spanning tree is a spanning tree having minimum total weight of edges

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

// We can use priority queue (min heap so that we can find min values without iterating each time)

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

    vector<int> key(m, INT_MAX);  //this will store the minimum weight of edge a vertex has
    vector<bool> mst(m, false);   //it check record of the node whether in tree or not
    vector<int> parent(m, -1);    //it keeps record of the parent from which edge with key value is connected to the node

    // We are taking initial as 0;
    key[0] = 0;
    for (int i = 0; i < n; i++)   //traversing for all edges
    {
        int mini = INT_MAX;      //this is the weight minimum edge in each iteration
        int u;                   //node with minimum edge
        for (int j = 0; j < m; j++)   //traversing all nodes to get the minimum weighted edge to any of them at that point of time
        {
            if (mst[j] == false && key[j] < mini)  //checking the minimum key value that is present and not in mst
            {
                mini = key[j];   //updating values
                u = j;
            }
        }
        mst[u] = true;     //node with minimum weighted edge is put in the mst 
        for (auto k : g.adj[u])  //checking adjacent nodes of the u node
        {
            int v = k.first;   //adjacent node
            int w = k.second;  //key of the adjacent node
            if (mst[v] == false && w < key[v])  ///if the adjacent node is not in mst and the value in it after previous iteration is greater than that in present one
            {
                parent[v] = u;   //update the new lesser key value of the node as well as this new u node becomes the parent that has edge to adjacent with min weight
                key[v] = w;
            }
        }
    }

    for (int i = 1; i < n -1; i++)   //when loop runs number of times equal to edges,we traversed all the edges and undated the minimum possible key of edges in key vector with the parent from which it is connected and also all of the nodes get traversed in the mst
    {
        cout << "u: " << parent[i] << "  v: " << i << "  w: " << key[i] << endl; //so we print the answer using the key i.e. the weight of edges & parent and i between which that edge exists
    }

    return 0;
}
