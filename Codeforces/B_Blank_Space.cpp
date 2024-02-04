#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N ; vector<int> A(N); int ans = 0;
for(auto &a : A) cin >> a;
int current = 0;
for(int i = 0 ; i < N ; i++){
    if((A[i]==0)){
        current++;
    }
    else{
        ans = max(ans, current);
        current = 0;
    }
}
ans = max(ans, current);
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