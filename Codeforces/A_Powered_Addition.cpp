#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<int> A(N);
for (auto &a : A) cin >> a;

int maxm = 0;
for(int i = 0 ; i < N - 1 ; ++i){
    if(A[i] > A[i + 1]){
        maxm = max(maxm, A[i] - A[i + 1]);
        A[i + 1] = A[i];
    }
}
double ans1  = (log2(maxm + 1));
int ans = ans1;
if(ans1 != ans){
    ans++;
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
