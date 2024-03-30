#include <bits/stdc++.h>
using namespace std;

vector<bool> visited(100001, false); // Changed the size argument to 100001
vector<vector<int>> adj(100001); // Changed the size argument to 100001

void dfs(int vertex){
    cout << vertex << " ";
    visited[vertex] = true;
    for(int child : adj[vertex]){
        if(!visited[child]){
            dfs(child);
        }
    }
}

void print_connected_components(int Nodes){
    for(int i = 1; i <= Nodes; i++){
        if(!visited[i]){
            dfs(i);
            cout << endl;
        }
    }
}

bool detect_cycle_helper(int vertex, int parent) {
    visited[vertex] = true;
    for (int child : adj[vertex]) {
        if (!visited[child]) {
            if (detect_cycle_helper(child, vertex))
                return true;
        }
        else if (child != parent)
            return true;
    }
    return false;
}

void detect_cycle(int Nodes){
    visited.assign(Nodes + 1, false);
    for(int i = 1; i <= Nodes; i++){
        if(!visited[i]){
            if(detect_cycle_helper(i, -1)){
                cout << "Cycle detected" << endl;
                return;
            }
        }
    }
    cout << "No cycle detected" << endl;
}


int main(){
    int Nodes, Edges;
    cin >> Nodes >> Edges;

    while(Edges--){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    print_connected_components(Nodes);
    detect_cycle(Nodes);

    return 0;
}
