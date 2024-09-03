// Graph is a data structure that is a combination of vertices and edges.
// Vertices/Nodes are blocks where data are stored
// Edges are the connections between nodes.
// Graphs can be directed or undirected. Degree of undirected graph is total number of edges attached to it and directed graph has separate indegree and outdegree
// Weighted graphs has value assigned to its edges whereas Non-weighted graph don't
// Path is route or the sequence of nodes travelled to go from one node to other without repeating a node where starting and ending nodes must not be same and all nodes need not to be traversed
// Cyclic graph is a graph that froms a cycle when we start from a point and reach to the same point again. Acyclic is opposite to it


// Adjacency matrix is a 2D matrix in which we mark the edges present in the graph as 1, in directed graph direction is also considered

// In Adjacency List we make a list of all the nodes that are neighbours of the node. Map with key as node and list with neighbours can be used for implementation


// Implementation of Graph using adjacency list with map(2D vector,unordered list can also be used) and vector(list can be used)
#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Graph
{
    public:
    map<int,vector<int>>adj;

    void addEdge(int u,int v,bool direction)
    {
        adj[u].push_back(v);
        if(direction==0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for(auto i:adj)
        {
            cout<<i.first<<" :  ";
            for(auto j:i.second)
            {
                cout<<j<<",  ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Graph g;
    int m;
    cout<<"Enter number of nodes:";
    cin>>m;
    int n;
    cout<<"Enter number of edges:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int u,v;
        cout<<"Enter edge:";
        cin>>u>>v;
        if(u>=m || v>=m)
        {
            cout<<"Invalid node number!";
            return 0;
        }
        g.addEdge(u,v,0);
    }
    g.printAdjList();
    return 0;
}