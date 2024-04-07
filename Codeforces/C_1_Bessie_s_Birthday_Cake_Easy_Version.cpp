#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N, X, Y; cin >> N >> X >> Y; vector<int> A(X); 
for(auto &x : A) cin >> x, x--; sort(A.begin(), A.end());
int answer = X - 2;
for(int i = 0 ; i < X - 1 ; ++i){
    if(A[i] + 2 == A[i + 1]){
        answer++;
    }
}
if(X > 1){
    if((A.back() + 2)%N == A.front()){
        answer++;
    }
}
cout << answer << endl;
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