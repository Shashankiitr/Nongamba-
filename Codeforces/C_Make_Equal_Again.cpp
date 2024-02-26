#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<int> A(N); for(auto &a : A) cin >> a;
if(A[0] == A[N - 1]){
    int j = 0;
    while(j < N && A[j] == A[0]){
        j++;
    }
    if(j == N){
        cout << 0 << endl;
        return;
    }
    int k = N - 1;
    while(k >= 0 && A[k] == A[N - 1]){
        k--;
    }
    cout << k - j + 1 << endl;
}
else{
    int j = 0;
    while(j < N && A[j] == A[0]){
        j++;
    }
    int k = N - 1;
    while(k >= 0 && A[k] == A[N - 1]){
        k--;
    }
    cout << min(N - 1 - j + 1, k - 0 + 1) << endl;
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