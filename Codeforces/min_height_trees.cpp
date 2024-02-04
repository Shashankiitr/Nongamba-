#include <bits/stdc++.h>
//#define int long long
using namespace std;

void dfs(const vector<vector<int>>& adj_matrix, vector<bool>& visited, int vertex, int depth, int& max_depth) {
    visited[vertex] = true;
    max_depth = max(max_depth, depth);

    for (int neighbor = 0; neighbor < adj_matrix.size(); ++neighbor) {
        if (adj_matrix[vertex][neighbor] == 1 && !visited[neighbor]) {
            dfs(adj_matrix, visited, neighbor, depth + 1, max_depth);
        }
    }
}

int graphHeight(const vector<vector<int>>& adj_matrix, int root) {
    int num_vertices = adj_matrix.size();
    vector<bool> visited(num_vertices, false);
    int max_depth = 0;

    dfs(adj_matrix, visited, root, 0, max_depth);

    return max_depth;
}

void solve(){
int N; cin >> N; vector<pair<int, int>> A(N - 1); for(auto &a : A) cin >> a.first >> a.second;
vector<vector<int>> adj(N, vector<int>(N, 0));
for(int i = 0 ; i < N - 1 ; i++){
    adj[A[i].first][A[i].second] = 1;
    adj[A[i].second][A[i].first] = 1;
}
for(int i = 0 ; i < N ; i++){
    for(int j = 0 ; j < N ; j++){
        cout << adj[i][j] << " ";
    }
    cout << endl;
}

vector<pair<int, int>> ans(N); // {height, node}
for(int i = 0 ; i < N ; i++){
    int height = graphHeight(adj, i);
    ans[i].first = height;
    ans[i].second = i;
}
sort(ans.begin(), ans.end());
int i = 0, first = ans[i].first;
vector<int> answer;
while(i < N && ans[i].first == first){
    answer.push_back(ans[i].second);
    i++;
}
for(auto &a : answer){
    cout << a << " ";
}
cout << endl;
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

//time complexity: O(N^2)