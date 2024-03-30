#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N, K1, K2; cin >> N >> K1 >> K2; vector<int> A(N), B(N), C(N);
for(auto &x : A) cin >> x; for(auto &x : B) cin >> x;
int sum = 0;
for(int i = 0 ; i < N ; ++i){
    C[i] = abs(A[i] - B[i]); sum += C[i];
}
if(sum > K1 + K2){
int K = K1 + K2;
while(K--){
    sort(C.begin(), C.end());
    C[N - 1]--;
}
int sum = 0;
for(int i = 0 ; i < N ; ++i){
    sum += C[i]*C[i];
}
cout << sum << endl;
}
else if(sum < K1 + K2){
int left = K1 + K2 - sum;
if(left&1){
    cout << 1 << endl;
}
else{
    cout << 0 << endl;
}
}
else{
    cout << 0 << endl;
}
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}