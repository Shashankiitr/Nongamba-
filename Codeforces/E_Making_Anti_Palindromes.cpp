#include <bits/stdc++.h>
//#define int long long
using namespace std;

bool check(string S){
    int i = 0, j = S.length() - 1;
    while(i <= j){
        if(S[i] == S[j]) return false;
        i++; j--;
    }
    return true;
}

void solve(){
int N; cin >> N; string S; cin >> S;
if(N&1){
    cout << -1 << endl; return;
}
if(check(K)){
    cout << 0 << endl; return;
}
else{
int F[26];
for(int i = 0 ; i < N ; i++){
    F[S[i] - 'a']++;
}
sort(F, F + 26);
if(F[25] > N/2){
    cout << -1 << endl; return;
}
else if(F[25] == N/2){
    if(F[24] > 1){
        cout << -1 << endl; return;
    }
    else{
        //possible
    }
}
else{
    //possible
}
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