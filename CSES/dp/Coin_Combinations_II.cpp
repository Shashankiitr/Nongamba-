#include <bits/stdc++.h>
//#define int long long
using namespace std;

int mod = 1e9 + 7;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, X; cin >> N >> X; 
    vector<int> coins(N); for(auto &a : coins) cin >> a;
    vector<int> dp(X + 1, 0); dp[0] = 1;

    for(int i = 0 ; i < N ; ++i){
        for(int amount = 1 ; amount <= X ; ++amount){
            if(coins[i] <= amount) (dp[amount] += dp[amount - coins[i]])%=mod;
        }
    }

    cout << dp[X];

    return 0;
}