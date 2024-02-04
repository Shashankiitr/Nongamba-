#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N, K, X, sum = 0; cin >> N >> K >> X; vector<int> A(N); for(auto &a : A) cin >> a;
sort(A.begin(), A.end());   int end = N-X;
vector<int> pref_sum(N);
pref_sum[0] = A[0];
for(int i = 1 ; i < N ; i++){
    pref_sum[i] = pref_sum[i-1] + A[i];
}
// for(auto a : A){
//     cout << a << " ";
// }
for(int i = 0 ; i < N ; i++){
    if(i < end){
        sum += A[i];
    }
    else{
        sum -= A[i];
    }
}
int ans = sum, i = N - 1;
while(i >= N-K){
    if(i >= end){
        sum += A[i];
        if(end-1 >= 0) sum -= 2*A[end-1];
        end--; ans = max(ans, sum);
    }
    i--;
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