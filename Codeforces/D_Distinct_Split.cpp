#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; string S; cin >> S; set<char> st; vector<int> A(N), B(N);
for(int i = 0 ; i < N ; i++){
    st.insert(S[i]);
    A[i] = st.size();
}
st.clear();
for(int i = N - 1 ; i >= 0 ; i--){
    st.insert(S[i]);
    B[i] = st.size();
}
int ans = -1;
for(int i = 0 ; i < N - 1 ; i++){
    ans = max(ans, A[i] + B[i+1]);
}

cout << ans << endl;

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