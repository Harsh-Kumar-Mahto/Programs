#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>>adjM(n, vector<int>(n, 0));
    int edges;
    cin >> edges;
    while(edges--){
        int u, v;
        cin >> u >> v;
        adjM[u][v] = adjM[v][u] = 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << adjM[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}