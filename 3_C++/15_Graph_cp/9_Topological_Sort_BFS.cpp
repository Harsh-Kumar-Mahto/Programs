// This algorithm is also known as Kahn's algorithm
#include<queue>
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
    map<int,int>inDeg;
    for(int i=0;i<m;i++)
    {
        inDeg[i]=0;
    }
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
        inDeg[v]++;
        g.addEdge(u,v);
    }
    queue<int>q;  
    for(auto i:inDeg) 
    {
        if(i.second==0)
        {
            q.push(i.first);  //we will insert the key with indegree 0 in the queue 
        }
    }
    
    vector<int>ans;
    while(!q.empty())
    {
        int fr=q.front();  //Then pop it and push in answer. 
        q.pop();
        ans.push_back(fr);
        for(auto i:g.adj[fr])
        {
            if(--inDeg[i]==0) //Then reduce indegree of its connection and those whose indegree becomes 0 push in the queue
            {
                q.push(i);
            }
        }
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}