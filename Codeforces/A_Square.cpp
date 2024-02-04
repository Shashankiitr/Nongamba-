#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
vector<pair<int, int>> P(4); for(auto &p : P) cin >> p.first >> p.second;
sort(P.begin(), P.end());
int ans = sqrt((P[0].first - P[1].first)*(P[0].first - P[1].first) + (P[0].second - P[1].second)*(P[0].second - P[1].second));
cout << ans*ans << endl;

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