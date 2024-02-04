#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N, K; cin >> N >> K; vector<int> A(N); for(auto &a : A) cin >> a; sort(A.begin(), A.end());
int biggest = 0, current = 0;
for(int i = 0 ; i < N ; i++){
    if(i==0 || A[i] - A[i - 1] <= K){
        current++;
    }
    else{
        biggest = max(biggest, current);
        current = 1;
    }
}
biggest = max(biggest, current);
cout << N - biggest << endl;
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