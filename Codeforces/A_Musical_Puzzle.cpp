#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; string S; cin >> S; set<string> st;
for(int i = 0 ; i < N - 1 ; i++){
    st.insert(S.substr(i, 2));
}
cout << st.size() << endl;
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