#include <bits/stdc++.h>
//#define int long long
using namespace std;

int32_t main(){


int V, E; cin >> V >> E;

vector<vector<int>> adj_mat(V, vector<int>(V, 0));

for(int i = 0; i < E; i++){
    int u, v; cin >> u >> v;
    adj_mat[u][v] = 1;
    adj_mat[v][u] = 1;
}

vector<vector<int>> adj_list(V);    

for(int i = 0; i < E; i++){
    int u, v; cin >> u >> v;
    adj_list[u].push_back(v);
    adj_list[v].push_back(u);
}

//for weighted graph

vector<vector<pair<int, int>>> adj_list_weighted(V);

for(int i = 0; i < E; i++){
    int u, v, w; cin >> u >> v >> w;
    adj_list_weighted[u].push_back({v, w});
    adj_list_weighted[v].push_back({u, w});
}


//for weighted graph using adj matrix

vector<vector<int>> adj_mat_weighted(V, vector<int>(V, 0));

for(int i = 0; i < E; i++){
    int u, v, w; cin >> u >> v >> w;
    adj_mat_weighted[u][v] = w;
    adj_mat_weighted[v][u] = w;
}

return 0;
}

se