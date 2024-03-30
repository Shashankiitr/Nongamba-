#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N; cin >> N; 
vector<int> A(N); int odd = 0, even = 0;
for(int i = 0 ; i < N ; i++){
    cin >> A[i];
    if(A[i]&1) odd++;
    else even++;
}
if(odd == 0 || even == 0){
    int K = 4;
    while(1 > 0){
        set<int> S;
        for(int i = 0 ; i < N ; i++){
            S.insert(A[i]%K);
        }
        if(S.size() == 2){
            cout << K << endl;
            return;
        }
        K <<= 1;
    }
}
else{
    cout << 2 << endl;
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