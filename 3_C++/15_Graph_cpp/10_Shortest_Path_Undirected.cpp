// In this we can use the approach the method of BFS when graph is unweighted as in it we travel level by level so the fastest to reach destination is the shortest path
#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;

class Graph
{
    public:
    map<int,vector<int>>adj;
    void addEdge(int u,int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void shortestPath(int node,map<int,bool>&isVisited,map<int,int>&parent)
    {
        queue<int>q;
        q.push(node);
        while(!q.empty())
        {
            int fr=q.front();
            q.pop();
            for(auto i:adj[fr])
            {
                if(!isVisited[i])
                {
                    isVisited[i]=true;
                    q.push(i);
                    parent[i]=fr;
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
        g.addEdge(u,v);
    }
    map<int,bool>isVisited;
    map<int,int>parent;
    for(int i=0;i<m;i++)
    {
        isVisited[i]=0;
    }
    
    int s;
    cout<<"Enter Source: ";
    cin>>s;
    isVisited[s]=1;
    parent[s]=-1;
    g.shortestPath(s,isVisited,parent);

    int p;
    cout<<"Enter Destination: ";
    cin>>p;
    vector<int>ans;
    while(p!=-1)  //This will generate the path
    {
        ans.push_back(p);
        p=parent[p];
    }
    for(int i=ans.size()-1;i>=0;i--)
    {
        cout<<ans[i]<<"  ";
    }
    return 0;
}