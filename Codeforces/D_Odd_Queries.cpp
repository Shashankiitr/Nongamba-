#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N, Q; cin >> N >> Q; vector<int> A(N); for(auto &a : A) cin >> a;
vector<int> pref_sum(N);
pref_sum[0] = A[0];
for(int i = 1 ; i < N ; i++){
    pref_sum[i] = pref_sum[i-1] + A[i];
}
vector<int> suff_sum(N);
suff_sum[N-1] = A[N-1];
for(int i = N-2 ; i >= 0 ; i--){
    suff_sum[i] = suff_sum[i+1] + A[i];
}
while(Q--){
    int l, r, K; cin >> l >> r >> K; l--; r--;
    int sum = (r-l+1)*K;
    if(l!=0){
        sum += pref_sum[l-1];
    }
    if(r!=N-1){
        sum += suff_sum[r+1];
    }
    if(sum&1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
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