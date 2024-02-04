#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<int> A(N); for(auto &a : A) cin >> a; sort(A.begin(), A.end());
A.erase(unique(A.begin(), A.end()), A.end());
if(A.size() <= 3){
    cout << 0 << endl;
    return;
}
for(auto &a : A) cout << a << " ";
cout << endl;
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

//3 30 60
// 14 50 85