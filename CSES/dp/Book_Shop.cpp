#include <bits/stdc++.h>
//#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, X; cin >> N >> X; vector<int> A(N),B(N);
    for(auto &a : A) cin >> a; for(auto &b : B) cin >> b;

    vector<vector<int>> dp(N, vector<int>(X + 1, 0));
    dp[0][0] = 0;
    
    return 0;
}