#include<iostream>
#include<queue>
#include<map>
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
    
    bool isCyclicDFS(map<int,bool>&isVisited,int node,int parent)
    {
        isVisited[node]=1;
        for(auto i:adj[node])
        {
            if(!isVisited[i])
            {
                bool cycelDetected=isCyclicDFS(isVisited,i,node);
                if(cycelDetected)
                {
                    return true;
                }
            }
            else if(i!=parent)
            {
                return true;
            }
        }
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
        g.addEdge(u,v,0);
    }
    map<int,bool>isVisited;
    for(int i=0;i<m;i++)
    {
        isVisited[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        if(isVisited[i]==0)
        {
            bool ans=g.isCyclicDFS(isVisited,i,-1);
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