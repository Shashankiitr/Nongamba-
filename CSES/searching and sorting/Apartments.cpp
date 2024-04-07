#include <bits/stdc++.h>
#define int long long
using namespace std;

// int lower_bound(vector<int> &v, int x){
//     int l = 0, r = v.size() - 1;
//     while(l < r){
//         int m = l + (r - l) / 2;
//         if(v[m] < x) l = m + 1;
//         else r = m;
//     }
//     return l;
// }

// bool check(int a, int b, int c){
//     //cout << a << " " << b << " " << c << endl;

//     if(b == c){
//         return a == b;
//     }

//     return a > b && a < c;
// }

void solve(){
int N, M, K; cin >> N >> M >> K;
vector<int> A(N), B(M);
for(auto &a : A) cin >> a;
for(auto &a : B) cin >> a;
sort(A.begin(), A.end());
sort(B.begin(), B.end());
//B.erase(unique(B.begin(), B.end()), B.end());

int ans = 0;

//for(auto &a : B) cout << a << " ";
//cout << endl;

//M = B.size();

//cout << lower_bound(B, 77) << endl;
int i = 0, j = 0;

while(i < N && j < M){
    // int x = lower_bound(B, A[i]);
    // //cout << x << endl;
    // if(check(B[x], A[i] - K, A[i] + K) || (x - 1 >= 0 && check(B[x - 1], A[i] - K, A[i] + K)) || (x + 1 < M && check(B[x + 1], A[i] - K, A[i] + K)) || (x - 2 >= 0 && check(B[x - 2], A[i] - K, A[i] + K)) || (x + 2 < M && check(B[x + 2], A[i] - K, A[i] + K))){
    //     ans++; continue;
    // }
    // // if{
    // //     ans++; continue;
    // // }
    // // if{
    // //     ans++; continue;
    // // }
    if(abs(A[i] - B[j]) <= K){
        ans++; i++; j++;
    }
    else{
        if(A[i] - B[j] > K) j++;
        else i++;    
    }
}
cout << ans << endl;
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