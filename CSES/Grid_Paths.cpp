#include <bits/stdc++.h>
//#define int long long
using namespace std;

int mod = 1e9 + 7;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N; vector<vector<char>> path(N, vector<char>(N));
    for(int i = 0 ; i < N ; ++i){
        for(int j = 0 ; j < N ; ++j){
            cin >> path[i][j];
        }
    }
    vector<vector<int>> dp(N, vector<int>(N, -1));
    if(path[0][0] == '*') dp[0][0] = 0;
    else dp[0][0] = 1;

    for(int i = 1 ; i < N ; ++i){
        if(path[0][i] == '*') break;
        else dp[0][i] = dp[0][i - 1];
    }

    for(int i = 1 ; i < N ; ++i){
        if(path[i][0] == '*') break;
        else dp[i][0] = dp[i - 1][0];
    }

    for(int i = 1 ; i < N ; ++i){
        for(int j = 1 ; j < N ; ++j){
            if(path[i][j] != '*'){
                if(dp[i - 1][j] != -1 && dp[i][j - 1] != -1){
                    dp[i][j] = (dp[i][j - 1] + dp[i - 1][j])%mod;
                }
                else if(dp[i -1][j] == -1){
                    dp[i][j] = dp[i][j - 1]%mod;
                }
                else if(dp[i][j - 1] == -1){
                    dp[i][j] = dp[i - 1][j]%mod;
                }
            }
        }
    }
    if(dp[N - 1][N - 1] != -1) cout << dp[N - 1][N - 1];
    else cout << 0;
    return 0;
}