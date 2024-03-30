#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; string S; cin >> S;
int one_count = 0;
for(int i = 0; i < N; i++){
    if(S[i] == '1'){
        one_count++;
    }
}
if(one_count == 0){
    cout << N << endl;
    return;
}
else if(one_count == N){
    cout << N << endl;
}
else{
    int maxlen = 0;
    int i = 0;
    while(i < N){
        if(S[i] == '0'){
            int j = i;
            while(j < N && S[j] == '0'){
                j++;
            }
            maxlen = max(maxlen, j - i);
            i = j;
        }
        else{
            i++;
        }
    }
    int ans = one_count + maxlen;
    cout << ans << endl;
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