#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; int odd = 0, even = 0;
while(N--){
    int x; cin >> x;
    if(x&1){
        odd+=x;
    }
    else{
        even+=x;
    }
}
if(even > odd){
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