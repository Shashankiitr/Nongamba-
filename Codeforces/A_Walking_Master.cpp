#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int a, b, c, d; cin >> a >> b >> c >> d;
if(a == c && b == d){
    cout << 0 << endl; return;
}
if(d < b){
    cout << -1 << endl;
}
else{
    int X = abs(abs(d) - abs(c - a));
    int Y = abs(d);
    cout << X + Y << endl;
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