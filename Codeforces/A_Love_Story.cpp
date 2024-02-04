#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
string S, C = "codeforces"; cin >> S;
int ans = 0;
for(int i = 0 ; i < 10 ; i++){
    if(S[i] != C[i]){
        ans++;
    }
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