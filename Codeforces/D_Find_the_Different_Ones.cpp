#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve() {
    int n; cin >> n; vector<int> A(n); for(auto &a : A) cin >> a; set<int> S;
    for (int i = 1; i < n; i++) {
        if (A[i] != A[i - 1]) {
            S.insert(i + 1);
        }
    }
    int q; cin >> q;
    for(int i = 1 ; i <= q ; i++){
        int l, r;
        cin >> l >> r;
        auto itr = S.upper_bound(r);
        if (itr == S.begin()) {
            cout << -1 << " " << -1 << endl;
            continue;
        }
        itr--;
        int b = *itr;
        int a = b - 1;
        if (a >= l) {
            cout << a << " " << b << endl;
        } else {
            cout << -1 << " " << -1 << endl;
        }
        cout << endl;
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