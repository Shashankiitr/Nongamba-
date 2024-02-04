#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N, K; cin >> N >> K; vector<pair<int , int>> A(N); vector<int> B(N);
for(int i = 0 ; i < N ; i++){
    cin >> A[i].first;
    A[i].second = i;
}
for(auto &b : B) cin >> b;
// for(int i = 0 ; i < N ; i++){
//     cout << A[i].first << " ";
// }
sort(A.begin(), A.end()); sort(B.begin(), B.end());

//cout << endl;
for(int i = 0 ; i < N ; i++){
    A[i].first = B[i];
}
//sort A according to second element
sort(A.begin(), A.end(), [](pair<int , int> a, pair<int , int> b){
    return a.second < b.second;
});
for(int i = 0 ; i < N ; i++){
    cout << A[i].first << " ";
}
cout << endl;
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