// We know that topological sort can only be applied on Directed Acyclic Graph
// So we will use the kahn's algo used to find topological sort using BFS and if it doesn't generate any result means it is a cyclic graph
// If length of valid topological sort is not equal to number of nodes than it consist a cycle

#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;

class Graph
{
    public:
    map<int,vector<int>> adj;
    void addEdge(int u,int v)
    {
        adj[u].push_back(v);
    }
    bool isCyclic(map<int,int>&inDeg,int m)
    {
        int count=0;
        queue<int>q;
        for(auto i:inDeg)
        {
            if(i.second==0)
            {
                q.push(i.first);
            }
        }
        while(!q.empty())
        {
            int fr=q.front();
            q.pop();
            count++;
            for(auto i:adj[fr])
            {
                if(--inDeg[i]==0)
                {
                    q.push(i);
                }
            }
        }
        if(count==m)
        {
            return false;
        }
        return true;
    }
};

int main()
{
    Graph g;
    int m;
    cout<<"Enter number of edges: ";
    cin>>m;
    int n;
    cout<<"Enter number of vertices: ";
    cin>>n;
    map<int,int>inDeg;
    for(int i=0;i<m;i++)
    {
        inDeg[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        int u,v;
        cout<<"Enter edges:";
        cin>>u>>v;
        g.addEdge(u,v);
        inDeg[v]++;
    }
    for(int i=0;i<m;i++)
    {
        if(g.isCyclic(inDeg,m))
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}