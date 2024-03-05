#include <bits/stdc++.h>
//#define int long long
using namespace std;

int countSubmatrices(vector<vector<int>>& grid, int k) {
    int N = grid.size(); int M = grid[0].size();
    int ans = 0;
    vector<vector<int>> dp(N, vector<int>(M, 0));
    dp[0][0] = grid[0][0];
    for(int i = 1 ; i < N ; ++i){
        dp[i][0] = grid[i][0] + dp[i-1][0];
    }

    for(int j = 1 ; j < M ; ++j){
        dp[0][j] = grid[0][j] + dp[0][j-1];
    }

    for(int i = 1 ; i < N ; ++i){
        for(int j = 1 ; j < M ; ++j){
            dp[i][j] = grid[i][j] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
        }
    }

    for(int i = 0 ; i < N ; ++i){
        for(int j = 0 ; j < M ; ++j){
            if(dp[i][j] <= k){
                ans++;
            }
        }
    }

    return ans;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M, K; cin >> N >> M >> K;
    vector<vector<int>> grid(N, vector<int>(M));
    for(int i = 0 ; i < N ; ++i){
        for(int j = 0 ; j < M ; ++j){
            cin >> grid[i][j];
        }
    }
    cout << countSubmatrices(grid, K) << endl;

    return 0;
}