#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
    int N; cin >> N;
    if(N&1){
        string s = "b";
        while(N!=1){
            s += "ab"; N-=2;
        }
        cout << s << endl;
    }
    else{
        int X = 1;
        while(X <= 26){
            if(N%X != 0){
                break;
            }
            X+=1;
        }
        string s = "abcdefghijklmnopqrstuvwxyz";
        string a = s.substr(0, X);
        int b = N/X;
        string ans = "";
        while(b!=0){
            ans += a; b--;
        }
        ans += s.substr(0, N%X);
        cout << ans << endl;
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