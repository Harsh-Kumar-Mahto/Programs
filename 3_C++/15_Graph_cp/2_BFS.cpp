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
    void printBFS(map<int,bool>&isVisited,int node)
    {
        queue<int>q;
        q.push(node);
        isVisited[node]=1;
        while(!q.empty())
        {
            int fr=q.front();
            q.pop();
            cout<<fr<<" ";
            for(auto i:adj[fr])
            {
                if(isVisited[i]==0)
                {
                    q.push(i);
                    isVisited[i]=1;
                }
            }
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
    map<int,bool>isVisited;
    for(int i=0;i<m;i++)
    {
        isVisited[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        if(isVisited[i]==0)
        g.printBFS(isVisited,i);
    }
    
    return 0;
}