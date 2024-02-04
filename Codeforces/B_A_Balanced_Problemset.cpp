#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int X, N; cin >> X >> N;
if(X==N){
    cout << 1 << endl;
}
else{
    vector<int> factors;
    for(int i = 1 ; i <= sqrt(X) ; i++){
        if(X%i==0){
            factors.push_back(i);
            if(i!=X/i){
                factors.push_back(X/i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    // for(auto &f : factors){
    //     cout << f << " ";
    // }
    // cout << endl;
    int ans = 0;
    for(int i = 0 ; i < factors.size() ; i++){
        if(X/factors[i] < N){
            break;
        }
        else{
            ans = factors[i];
        }
    }
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