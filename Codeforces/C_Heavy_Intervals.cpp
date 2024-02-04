#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <numeric>
#define int long long
using namespace std;

void solve(){
    int N; cin >> N; vector <int> C(N), D; set<int> R, L;
    for(int i = 0 ; i < N ; i++){int x; cin >> x; L.insert(x);} for(int i = 0 ; i < N ; i++){int x; cin >> x; R.insert(x);} for(auto &c : C) cin >> c;
    sort(C.begin(), C.end()); reverse(C.begin(), C.end());
    for(auto &r : R){
        auto it = L.lower_bound(r); it--;
        int x = r - (*it);
        D.push_back(x); L.erase(it);
    }
    sort(D.begin(), D.end()); 
    int ans = 0;
    for(int i = 0 ; i < N ; i++){
        ans += C[i] * D[i];
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

//time complexity: O(NlogN)
