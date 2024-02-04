#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N, neg = 0; cin >> N; bool zero = false; int sum = 0, minNeg = INT_MAX;
for(int i = 0 ; i < N ; i++){
    int x; cin >> x;
    if(x < 0){
        neg++;
    }
    minNeg = min(minNeg, abs(x));
    if(x == 0) zero = true;
    sum += abs(x);
}
if(zero){
    cout << sum << endl;
}
else{
    if(neg&1){
        cout << sum - 2*minNeg << endl;
    }
    else{
        cout << sum << endl;
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