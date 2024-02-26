#include <bits/stdc++.h>
//#define int long long
using namespace std;

const int INF = 1e9;

int solve1(string S){
    int N = S.length(); S = "0" + S;
    
    vector <int> dp(N + 1, INF);
    dp[0] = 0;
    for (int i = 1; i <= N; i++){
        if (S[i] == '0') dp[i] = dp[i - 1];
        for (int j = 0; j < i; j++){
            dp[i] = min(dp[i], dp[j] + (i - j + 2) / 3);
        }
    }
    
    return dp[N];
}

void solve(){
int N; cin >> N;
string S; cin >> S;
int ans = 0;
    
for (int i = 0; i < N; i++){
    string T = "";
    for (int j = i; j < N; j++){
        T += S[j];
        ans += solve1(T);
    }
}
cout << ans << endl;
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