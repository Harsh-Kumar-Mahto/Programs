#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int nodes;
    cin >> nodes;
    int edges;
    cin >> edges;
    vector<vector<int>> adj_matrix(nodes, vector<int>(nodes, 0));
    while (edges--)
    {
        int u, v, weight;
        cin >> u >> v >> weight;
        adj_matrix[u][v] = weight;
        adj_matrix[v][u] = weight;
    }
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}