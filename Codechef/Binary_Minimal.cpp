#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N, K; cin >> N >> K; string S; cin >> S;
int ones = 0;
for(int i = 0; i < N; i++){
    if(S[i] == '1') ones++;
}
if(ones > K){
for(int i = 0 ; i < N && K != 0 ; ++i){
    if(S[i] == '1'){
        S[i] = '0'; K--;
    }
}
cout << S << endl;
}
else{
for(int i = 0 ; i < N - K ; ++i){
    cout << 0;
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