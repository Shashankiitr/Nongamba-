#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N, K; cin >> N >> K;
int ones = 2;
int twos = 2*N - 2;
int total = 2 + 2*twos;
if(K == total){
    cout << ones + twos << endl;
}
else{
    if(K&1){
        int ans = (K - 1)/2;
        cout << ans + 1<< endl;
    }
    else{
        cout << K/2 << endl;
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