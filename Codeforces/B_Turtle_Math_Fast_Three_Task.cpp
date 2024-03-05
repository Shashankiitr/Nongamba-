#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<int> A(N); int sum = 0;
for(auto &a : A){
    cin >> a; sum += a;
}
if(sum%3 == 0){
    cout << 0 << endl;
}
else if(N == 1){
    cout << 1 << endl;
}
else if(sum%3 == 1){
    bool flag = false;
    for(int i = 0 ; i < N ; ++i){
        if(A[i]%3 == 1){
            flag = true; break;
        }
    }
    cout << (flag ? 1 : 2) << endl;
}
else{
    cout << 1 << endl;
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