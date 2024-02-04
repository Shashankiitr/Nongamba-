#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; 
vector<vector<int>> A(N, vector<int>(2));
for(int i = 0 ; i < N ; i++){
    cin >> A[i][0] >> A[i][1];
}
sort(A.begin(), A.end());
for(int i = 0 ; i < N ; i++){
    cout << A[i][0] << " " << A[i][1] << endl;
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