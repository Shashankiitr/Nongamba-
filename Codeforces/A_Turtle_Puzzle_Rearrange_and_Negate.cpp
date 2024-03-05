#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; int ans = 0;
for(int i = 1 ; i <= N ; i++){
    int X; cin >> X; ans += abs(X);
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