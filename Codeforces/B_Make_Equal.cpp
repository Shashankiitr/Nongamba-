#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N, sum = 0; cin >> N;
vector<int> A(N); 
for(auto &a : A){
    cin >> a;
    sum += a;
}
int M = sum/N;
int B = 0;
for(int i = 0 ; i < N ; i++){
    if(A[i] > M){
        B+=(A[i] - M);
    }
    else{
        int X = M - A[i];
        B -= X;
    }
    if(B < 0){
        cout << "NO" << endl;
        return;
    }
}
cout << "YES" << endl;
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