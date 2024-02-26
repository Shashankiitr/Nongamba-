#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; string S; cin >> S; int ans = 0;
for(int i = 0 ; i < N - 1 ; ++i){
    if(S[i + 1] == '@') ans++;
    else if(S[i + 1] == '*'){
        if(i + 2 < N && S[i + 2] == '*') break;
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