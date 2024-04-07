#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N, K; cin >> N >> K;
if(K == 1){
    cout << 5 << " ";
    N--;
    while(N--){
        cout << 1 << " ";
    }
    cout << endl;
}
else if(K == N){
    while(N--){
        cout << 1 << " ";
    }
    cout << endl;
}
else{
    cout << -1 << endl;
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