#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int X, Y; cin >> X >> Y;
if(X%2 == 0 && Y%2 == 0){
    cout << "Yes" << endl;
}
else if(X%2 != 0 && Y%2 != 0){
    cout << "No" << endl;
}
else{
    if(X&1){
        if(Y/2 == X){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
    else{
        if(X/2 == Y){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
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