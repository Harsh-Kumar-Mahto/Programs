#include <iostream>
#include <map>
#include <stack>
#include<set>
#include <vector>
using namespace std;

// Complete this code

class Graph {
public:
    map<int, vector<pair<int, int>>> adj;

    void addEdge(int u, int v, int weight) {
        pair<int, int> p(v, weight);
        adj[u].push_back(p);
        pair<int, int> p(u, weight);
        adj[v].push_back(p);
    }
};

int main() {
    Graph g;
    int m;
    cout << "Enter number of nodes: ";
    cin >> m;
    int n;
    cout << "Enter number of edges: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int u, v, weight;
        cout << "Enter edge (u v weight): ";
        cin >> u >> v >> weight;
        if (u >= m || v >= m) {
            cout << "Invalid node number!";
            return 0;
        }
        g.addEdge(u, v, weight);
    }
    vector<int> dist(m, INT_MAX);
    set<pair<int,int>>st;
    int source;
    cout<<"Enter the source node: ";
    cin>>source;
    dist[source]=0;
    st.insert(make_pair(0,source));
    while(!st.empty())
    {
        auto top=*(st.begin());
        int nodeDist=top.first;
        int topNode=top.second;

        st.erase(st.begin());

        for(auto i:g.adj[topNode])
        {
            if(nodeDist+i.second < dist[i.first])
            {
                auto record=st.find();
            }
        }
    }
    return 0;
}
