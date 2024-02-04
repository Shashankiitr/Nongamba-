#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<int> A(N), B(N, 1); for(auto &a : A) cin >> a;
int ans = 0;
for(int i = 1 ; i < N ; i++){
    if(A[i] > A[i - 1]){
        B[i] = 1 + B[i - 1];
    }
}
for(int i = N - 2 ; i >= 0 ; i--){
    if(A[i] > A[i + 1]){
        B[i] = max(B[i], 1 + B[i + 1]);
    }
}
for(auto &b : B) ans += b;
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