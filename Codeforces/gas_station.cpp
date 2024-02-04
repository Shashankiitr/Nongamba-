#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<int> G(N), C(N), GC(N); 
int sumGC = 0;
for(int i = 0 ; i < N ; i++){
    cin >> G[i];
}
for(int i = 0 ; i < N ; i++){
    cin >> C[i];
}
for(int i = 0 ; i < N ; i++){
    GC[i] = G[i] - C[i]; sumGC += GC[i];
}
if(sumGC < 0){
    cout << -1 << endl;
}
else{
    int ans = 0, sum = 0;
    for(int i = 0 ; i < N ; i++){
        sum += GC[i];
        if(sum < 0){
            sum = 0;
            ans = i + 1;
        }
    }
    cout << ans << endl;
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