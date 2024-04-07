//http://spoj.com/problems/AKBAR

#include <bits/stdc++.h>
using namespace std;

bool bfs(int strt, vector<vector<int>> &adj_list, vector<bool> &visited, vector<int> &Protected, int S){
    Protected[strt]++;
    visited[strt] = true;

    if(Protected[strt] > 1){
        return false;
    }

    queue<pair<int, int>> q;
    q.push({strt, S});

    while(!q.empty()){
        int node = q.front().first, S_left = q.front().second - 1;
        q.pop();

        if(S_left < 0){
            continue;
        }

        for(auto adj_node : adj_list[node]){
            if(!visited[adj_node]){
                visited[adj_node] = true;
                Protected[adj_node]++;
                q.push({adj_node, S_left});
            }
        }
    }
    return true;
}

void solve(){
int N, R, M; cin >> N >> R >> M;
vector<vector<int>> adj_list(N + 1);
vector<pair<int, int>> strength;
vector<bool> visited(N + 1, false);
vector<int> Protected(N + 1, 0); // taki dekh sake ki ek node isnote protected by more than 1 soldier
for(int i = 1 ; i <= R ; ++i){
    int u, v; cin >> u >> v;
    adj_list[u].push_back(v);
    adj_list[v].push_back(u);
}

for(int i = 1 ; i <= M ; ++i){
    int x, y; cin >> x >> y;
    strength.push_back({x, y});
}

bool flag = true;

for(int i = 0 ; i < M ; ++i){
    flag = bfs(strength[i].first, adj_list, visited, Protected, strength[i].second);
    if(!flag) break;
}

if(!flag){
    cout << "No" << endl;
    return;
}

for(int i = 1 ; i <= N ; ++i){
    if(visited[i] == false){
        flag = false;
        break;
    }
}

if(flag){
    cout << "Yes" << endl;
}
else{
    cout << "No" << endl;
}

}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}