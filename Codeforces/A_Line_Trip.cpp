#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N, X; cin >> N >> X; vector<int> A(N);
for(int i = 0; i < N; i++) cin >> A[i];

int ans = A[0];
for(int i = 0; i < N - 1 ; ++i){
    ans = max(ans, A[i + 1] - A[i]);
}
ans = max(ans, 2*(X - A[N - 1]));
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