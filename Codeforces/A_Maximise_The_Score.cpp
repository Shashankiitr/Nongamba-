#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<int> A(2*N); for(auto &a : A) cin >> a;
sort(A.begin(), A.end());
int ans = 0;
for(int i = 0; i < 2*N; i += 2){
    ans += A[i];
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