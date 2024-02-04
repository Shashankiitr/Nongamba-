#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; string A, B, C; cin >> N >> A >> B >> C; bool flag = true;
for(int i = 0 ; i < N ; i++){
    if(A[i] != C[i] && B[i] != C[i]){
        flag = false;
        break;
    }
}
cout << (!flag ? "YES" : "NO") << endl;
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