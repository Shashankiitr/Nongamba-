#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; string S; cin >> S;
for(int i = 0 ; i < N ; ){
    for(int j = i + 1 ; j < N ; j++){
        if(S[i] == S[j]){
            cout << S[i]; i = j + 1;
            break;
        }
    }
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