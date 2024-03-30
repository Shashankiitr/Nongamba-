#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<int> A(N); 
for(int i = 0; i < N; i++){
    cin >> A[i];
}
bool flag = true;
for(int i = 0 ; i < N - 2 ; i++){
    if(A[i] < 0){
        cout << "NO" << endl; return;
    }
    else{
        A[i + 2] -= A[i];
        A[i + 1] -= 2 * A[i];
    }
}
if(A[N - 1] != 0 || A[N - 2] != 0){
    cout << "NO" << endl;
}
else{
    cout << "YES" << endl;
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