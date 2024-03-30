#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; 
if(N&1){
    cout << "NO" << endl;
}
else{
    cout << "YES" << endl;
    int n = N/2;
    while(n--){
        cout << "AAB";
    }
    cout << endl;
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