#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<int> Passes(N); for(auto &a : Passes) cin >> a;
sort(Passes.begin(), Passes.end());
if(Passes[N - 1] == 0){
    cout << 0 << endl; return;
}
int sum = 0;
for(int i = 0 ; i < N - 1 ; ++i){
    sum += Passes[i];
}
if(sum < Passes[N - 1]){
    cout << Passes[N - 1] - sum << endl;
}
else{
    cout << 1 << endl;
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

