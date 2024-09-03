// We can't use the approach used in BFS and DFS cycle detection in undirected graph
// We have to take a different approach
#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Graph
{
    public:
    map<int,vector<int>>adj;
    void addEdge(int u,int v)
    {
        adj[u].push_back(v);
    }

    bool directedCyclicDFS(map<int,bool>&isVisited,int node,map<int,bool>&dfsVisited)
    {
        isVisited[node]=1;
        dfsVisited[node]=1;
        for(auto i:adj[node])
        {
            if(!isVisited[i])
            {
                bool cycelDetected=directedCyclicDFS(isVisited,i,dfsVisited);
                if(cycelDetected)
                {
                    return true;
                }
            }
            else if(dfsVisited[i])
            {
                return true;
            }
        }
        dfsVisited[node]=0;
        return false;
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
    map<int,bool>dfsVisited;
    for(int i=0;i<m;i++)
    {
        isVisited[i]=0;
        dfsVisited[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        if(isVisited[i]==0)
        {
            dfsVisited[i]=1;
            bool ans=g.directedCyclicDFS(isVisited,i,dfsVisited);
            if(ans==1)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    
    return 0;
}