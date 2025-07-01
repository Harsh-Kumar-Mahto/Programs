// We prefer adjacency list over adjacency matrix because of complexity O(V+E) in adjacency list and O(V^2) in adjacency matrix.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int nodes, edges;
    cin>>nodes>>edges;
    vector<vector<int>> adjList(nodes, vector<int>(nodes, 0));
    for(int i = 0; i < nodes; i++){
        int u, v;
        cin>>u>>v;

    }
}