#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N;
if(N == 1){
    cout << 1 << endl;
    return;
}

if(N&1){
    vector<int> A, B;
    for(int i = 1; i <= N; i++){
        if(i <= N/2 + 1){
            A.push_back(i);
        }
        else{
            B.push_back(i);
        }
    }
    reverse(B.begin(), B.end());
    for(int i = 0; i < N/2; i++){
        cout << A[i] << " " << B[i] << " ";
    }
    cout << A[N/2] << endl;
}
else{
    vector<int> A, B;
    for(int i = 1; i <= N; i++){
        if(i <= N/2){
            A.push_back(i);
        }
        else{
            B.push_back(i);
        }
    }
    reverse(B.begin(), B.end());
    for(int i = 0; i < N/2; i++){
        cout << A[i] << " " << B[i] << " ";
    }
    cout << endl;
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