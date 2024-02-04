#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N, F, A, B; cin >> N >> F >> A >> B; vector<int> P(N); for(auto &p : P) cin >> p;
for(int i = 0 ; i < N ; i++){
    if(i==0){
        F -= min(B, A*P[i]);
    }
    else{
        F -= min(B, A*(P[i] - P[i - 1]));
    }
}
cout << ((F > 0) ? "YES" : "NO") << endl;

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
