#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N, T; cin >> N >> T; vector<pair<int, int>> A(N);   
for(auto &a : A){
    cin >> a.first;
}
for(auto &a : A){
    cin >> a.second;
}
int index = -1, max = 0;
for(int i = 0 ; i < N && T > 0 ; i++){
    if(T >= A[i].first){
        if(A[i].second > max){
            max = A[i].second;
            index = i;
        }
    }
    T--;
}
cout << (index == -1 ? -1 : index + 1) << endl;
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