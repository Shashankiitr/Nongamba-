#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<int> C(N); for(auto &c : C) cin >> c; sort(C.begin(), C.end());
if(C[0] != 1){ 
    cout << "NO" << endl;
}
else{
    int total = C[0]; bool flag = true;
    for(int i = 1 ; i < N ; i++){
        if(C[i] > total){
            flag = false; break;    
        }
        else{
            total += C[i];
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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