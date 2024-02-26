#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int N, amount; 
    cin >> N >> amount;
    vector<int> coins(N); 
    for(auto &a : coins) 
        cin >> a;

    sort(coins.begin(), coins.end());
    
    vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0;
    
    for (int i = 1; i <= amount; ++i) {
        for (int j = 0; j < N; ++j) {
            if (coins[j] <= i){
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
    
    cout << (dp[amount] == INT_MAX ? -1 : dp[amount]) << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
