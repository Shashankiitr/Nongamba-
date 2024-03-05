#include <bits/stdc++.h>
//#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N; vector<vector<int>> adj(N, vector<int>(N, 0));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> adj[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(adj[i][j] == 1){
                cout << j + 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}