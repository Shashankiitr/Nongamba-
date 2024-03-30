#include <bits/stdc++.h>
//#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, X; cin >> N >> X;
    vector<int> prices(N);
    vector<int> pages(N);
    for(int i = 0 ; i < N ; ++i){
        cin >> prices[i];
    }
    for(int i = 0 ; i < N ; ++i){
        cin >> pages[i];
    }
    vector<vector<int>> dp(N + 1, vector<int>(X + 1, 0));

    for(int ind = 1 ; ind <= N ; ++ind){
        for(int amount = 0 ; amount <= X ; ++amount){
            int left_amount = amount - prices[ind - 1];
            dp[ind][amount] = dp[ind - 1][amount];
            if(left_amount >= 0){
                dp[ind][amount] = max(dp[ind][amount], dp[ind - 1][left_amount] + pages[ind - 1]);
            }
        
        }
    }
    cout << dp[N][X] << endl;
    return 0;
}

//time complexity is O(N*X)
