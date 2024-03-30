#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N, K, X; cin >> N >> K >> X;

if(K == 1){
    cout << "YES" << endl;
    return;
}

if(K == 2 && X == 1){
    cout << "NO" << endl;
    return;
}

while(K--){
    X/=2;
    if(K == 2){
        if(X == 1){
            cout << "NO" << endl;
            return;
        }
        else{
            break;
        }
    }
}
cout << "YES" << endl;
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