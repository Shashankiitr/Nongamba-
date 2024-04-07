#include <bits/stdc++.h>
//#define int long long
using namespace std;

int main(){
    int node, edges, source;
    cin >> node >> edges >> source;

    vector<vector<int>> adj(node);

    for(int i = 0 ; i < edges ; ++i){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<int> q;
    vector<bool> used(node);
    vector<int> d(node), p(node);

    q.push(source);
    used[source] = true;
    p[source] = -1;

    while(!q.empty()){
        int v = q.front();
        //cout << v << " ";
        q.pop();
        for(int u : adj[v]){
            if(!used[u]){
                used[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }

    // cout << endl;
    // cout << "distance : ";
    // for(auto &a : d) cout << a << " ";
    // cout << endl;

    // cout << "parent : " << endl;
    // for(int i = 0 ; i < p.size() ; ++i){
    //     cout << i << " " << p[i] << endl;
    // }

    int u; cin >> u;

    if(!used[u]){
        cout << "No path" << endl;
    }
    else{
        vector<int> path;
        for(int v = u ; v != -1 ; v = p[v]){
            path.push_back(v);
        }
        reverse(path.begin(), path.end());
        for(auto &p : path) cout << p << " ";
        cout << endl;
    }

}