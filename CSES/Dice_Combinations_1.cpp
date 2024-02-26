#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;
vector<int> dp;

void solve() {
int N; cin >> N; 
dp.assign(N + 1, 0);
dp[0] = 1; // assigned 1 as there is one way to make an empty set
for(int i = 1 ; i <= N ; i++){
    for(int j = 1 ; j <= 6 && (i - j >= 0) ; j++){
        dp[i] = (dp[i] + dp[i - j])%MOD;
    }
}
cout << dp[N] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
