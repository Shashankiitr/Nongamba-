#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; string S, F; cin >> S >> F; int count1 = 0, count2 = 0;
for(int i = 0 ; i < N ; i++){
    if(S[i]!=F[i]){
        if(S[i] == '1') count1++;
        else if(F[i] == '1') count2++;
    }
}
cout << max(count1, count2) << endl;
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


