#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N, M; cin >> N >> M; vector<int> A(N), B(M); for(auto &a : A) cin >> a; for(auto &b : B) cin >> b; sort(A.begin(), A.end()); sort(B.begin(), B.end());
vector<int> pref_sum_A(N), pref_sum_B(M), suff_sum_A(N), suff_sum_B(M); pref_sum_A[0] = A[0]; pref_sum_B[0] = B[0]; suff_sum_A[N - 1] = A[N - 1]; suff_sum_B[M - 1] = B[M - 1];
for(int i = 1 ; i < N ; i++){
    pref_sum_A[i] = pref_sum_A[i - 1] + A[i];
}
for(int i = 1 ; i < M ; i++){
    pref_sum_B[i] = pref_sum_B[i - 1] + B[i];
}
for(int i = N - 2 ; i >= 0 ; i--){
    suff_sum_A[i] = suff_sum_A[i + 1] + A[i];
}
for(int i = M - 2 ; i >= 0 ; i--){
    suff_sum_B[i] = suff_sum_B[i + 1] + B[i];
}
int ans = -1, sum, i = 0;
while(i < N + 1){
    if(i == 0) sum = suff_sum_B[M - N + i] - pref_sum_A[N - 1];
    else if(i == N) sum = suff_sum_A[0] - pref_sum_B[N - 1];
    else sum = suff_sum_A[N - i] + suff_sum_B[M - N + i] - pref_sum_A[N - i - 1] - pref_sum_B[i - 1];
    ans = max(ans, sum);
    i++;
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

