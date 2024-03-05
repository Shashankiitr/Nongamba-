#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;
vector<int> memo; 

int f(int i, int N) {
    if (i > N) return 0;
    if (i == N) return 1;
    
    if (memo[i] != -1)
        return memo[i];

    int ans = 0;
    for (int j = 1; j < 7; j++) {
        if (i + j <= N) ans = (ans + f(i + j, N)) % MOD;
    }
    return memo[i] = ans; 
}

void solve() {
    int N;
    cin >> N;
    memo.assign(N + 1, -1);
    int ans = 0;
    for (int i = 1; i < 7; i++) {
        if (i <= N) ans = (ans + f(i, N)) % MOD;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
