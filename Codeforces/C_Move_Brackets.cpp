#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; string S; cin >> N >> S;
int count = 0;
for(int i = 0 ; i < N ; ++i){
    if(S[i] == '('){
        count++;
    }
    else{
        if(count > 0) count--;
    }
}
cout << count << endl;
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