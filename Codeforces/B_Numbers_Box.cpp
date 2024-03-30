#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N, M; cin >> N >> M; int minm = 1e9, sum = 0, neg = 0;
for(int i = 0 ; i < N ; ++i){
    for(int j = 0 ; j < M ; ++j){
        int X; cin >> X;
        minm  = min(minm, abs(X));
        sum += abs(X); 
        if(X < 0) neg++;
    }
}
//cout << minm << endl;
//cout << "sum " << sum << endl;
if(neg&1){
    cout << sum - 2*minm << endl;
}
else{
    cout << sum << endl;
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