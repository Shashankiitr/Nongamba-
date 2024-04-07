#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N;
map<int, int> mp;
while(N--){
    int x; cin >> x;
    mp[x]++;
}
cout << mp.size() << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    while(t--){
        solve();
    }
    return 0;
}