#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N; cin >> N;
int S = 0;
while(N != 0){
    S += (N&1);
    N >>= 1;
}
if(S&1){
    cout << "ODD" << endl;
}
else{
    cout << "EVEN" << endl;
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