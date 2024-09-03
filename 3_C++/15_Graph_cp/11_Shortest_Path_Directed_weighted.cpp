#include <iostream>
#include <map>
#include <stack>
#include <vector>
using namespace std;

class Graph {
public:
    map<int, vector<pair<int, int>>> adj;

    void addEdge(int u, int v, int weight) {
        pair<int, int> p(v, weight);
        adj[u].push_back(p);
    }

    void topoSort(int node, vector<bool>& isVisited, stack<int> &topo) {
        isVisited[node] = true;
        for (auto i : adj[node]) {
            if (!isVisited[i.first]) {
                topoSort(i.first, isVisited, topo);
            }
        }
        topo.push(node);
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

    int s;
    cout << "Enter source node: ";
    cin >> s;

    vector<int> dist(m, INT_MAX);
    dist[s] = 0; // Initialize the distance of the source node to 0

    vector<bool> isVisited(m, false);
    stack<int> topo;
    for (int i = 0; i < m; i++) {
        if (!isVisited[i]) {
            isVisited[i]=1;
            g.topoSort(i, isVisited, topo);
        }
    }

    while (!topo.empty()) {
        int top = topo.top();
        topo.pop();
        if(dist[top]!=INT_MAX)   //we need to check this condition as we have to start from the source node and initially only it has dist 0 and all the nodes prior to it in the topoorder will have infinite distance from source
        {
            for (auto i : g.adj[top]) {
                if (dist[top] + i.second < dist[i.first]) {
                    dist[i.first] = dist[top] + i.second;
                }
            }
        }
    }

    cout << "Shortest distances from source node " << s << ":\n";
    for (int i = 0; i < m; i++) {
        if(dist[i]==INT_MAX)
        {
            cout << "Node " << i << ": Infinite" << endl;
        }
        else
        {
            cout << "Node " << i << ": " << dist[i] << endl;
        }
    }

    return 0;
}
