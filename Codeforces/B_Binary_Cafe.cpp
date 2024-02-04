#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N, K; cin >> N >> K; int M = log2(N);
if(M < K){
    cout << N + 1 << endl;
}
else{
    cout << (1 << (K)) << endl;
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