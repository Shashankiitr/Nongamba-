#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; string S; cin >> S; set<char> odd, even;
for(int i = 0 ; i < N ; i++){
    if(i&1){
        odd.insert(S[i]);
    }
    else{
        even.insert(S[i]);
    }
}
bool flag = true;
for(char i : odd){
    for(char j : even){
        if(i == j){
            flag = false;
        }
    }
}
if(flag){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
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