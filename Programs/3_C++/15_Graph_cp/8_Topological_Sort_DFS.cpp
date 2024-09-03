// Topological sort is a sort that can only be applied on DAG(Directed Acyclic Graphs)
// Topological sort is linear ordering of vertices such that for every edge u->v, u always appears before v in that ordering
// Multiple answers may be possible
// If the graph, it is never possible that it will form a valid topological sort

// Using DFS method to execute this
#include<iostream>
#include<map>
#include<vector>
#include<stack>
using namespace std;

class Graph
{
    public:
    map<int,vector<int>>adj;
    void addEdge(int u,int v)
    {
        adj[u].push_back(v);
    }
    void topologicalSort(int node,map<int,bool>&isVisited,stack<int>&nodes)
    {
        isVisited[node]=1;
        for(auto i:adj[node])
        {
            if(!isVisited[i])
            {
                isVisited[i]=true;
                topologicalSort(i,isVisited,nodes);
            }
        }
        nodes.push(node);  //whenever we are moving back recursively at that time we push the node in stack and this will form a topological sort
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
        g.addEdge(u,v);
    }
    map<int,bool>isVisited;
    stack<int>nodes;
    for(int i=0;i<m;i++)
    {
        isVisited[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        if(!isVisited[i])
        {
            g.topologicalSort(i,isVisited,nodes);
        }
    }
    cout<<"Valid topological sort:"<<endl;
    while(!nodes.empty())
    {
        cout<<nodes.top()<<" ";
        nodes.pop();
    }
    return 0;
}