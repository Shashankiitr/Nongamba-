#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<pair<int, string>> S(N); int min_10 = 1e6, min_01 = 1e6, min_11 = 1e6;
for(auto &a : S) cin >> a.first >> a.second;
for(int i = 0 ; i < N ; i++){
    if(S[i].second == "11") min_11 = min(min_11, S[i].first);
    if(S[i].second == "10") min_10 = min(min_10, S[i].first);
    if(S[i].second == "01") min_01 = min(min_01, S[i].first);
}
//cout << min_11 << " " << min_10 << " " << min_01 << endl;
if(min_11 == 1e6){
    if(min_01 == 1e6 || min_10 == 1e6){
        cout << -1 << endl;
    }
    else{
        cout << min_01 + min_10 << endl;
    }
}
else{
    if(min_01 == 1e6 || min_10 == 1e6){
        cout << min_11 << endl;
    }
    else{
        cout << min(min_11, min_01 + min_10) << endl;
    
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