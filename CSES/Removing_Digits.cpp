#include <bits/stdc++.h>
//#define int long long
using namespace std;

int MAX = 1e9 + 7;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N;
    vector<int> dp(N + 1, MAX);
    dp[0] = 0; 
    for(int i = 1 ; i <= N ; ++i){
        int temp = i;
        while(temp != 0){
            if(temp%10) dp[i] = min(dp[i], 1 + dp[i - temp%10]);
            temp/=10;
        }
    }
    cout << dp[N];
    return 0;
}