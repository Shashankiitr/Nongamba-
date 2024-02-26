#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<int> A(N); for(auto &a : A) cin >> a;
sort(A.begin(), A.end());
A.erase(unique(A.begin(), A.end()), A.end());
int ans = 0;
for(int i = 0 ; i < A.size(); i++){
    int X = upper_bound(A.begin(), A.end(), A[i] + N - 1) - A.begin();
    ans = max(ans, X - i);
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