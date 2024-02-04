#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int A, B, R, V = 0, i = 64; cin >> A >> B >> R; bool flag = false;
if(A < B) swap(A, B);
while(i >= 0){
    int X = pow(2, i); bool A1 = X&A, B1 = X&B;
    if(A1 == B1){
        i--; continue;
    }
    else if(flag == false){
        flag = true;
    }
    else if(A1){
        if(V + X <= R) V += X;
    }
    i--;
}
int ans1 = A^V; int ans2 = B^V;
cout << (ans1 - ans2 > 0 ? ans1 - ans2 : ans2 - ans1) << endl;
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