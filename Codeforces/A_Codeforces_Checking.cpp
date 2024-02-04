#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
string S = "codeforces"; char c; cin >> c;
if(S.find(c) != string::npos){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
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