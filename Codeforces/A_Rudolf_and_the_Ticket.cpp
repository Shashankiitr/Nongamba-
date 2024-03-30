#include <bits/stdc++.h>
//#define int long long
using namespace std;



void solve(){
int N, M, K; cin >> N >> M >> K;
vector<int> A(N), B(M);
for(int i = 0; i < N; i++){
    cin >> A[i];
}
for(int i = 0; i < M; i++){
    cin >> B[i];
}
int ans = 0;
sort(A.begin(), A.end()); sort(B.begin(), B.end());
for(int i = 0; i < N; i++){
    int X = K - A[i];
    if(X <= 0){
        break;
    }
    for(int i = M - 1 ; i >= 0; i--){
        if(B[i] <= X){
            ans += i + 1;
            break;
        }
    }
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