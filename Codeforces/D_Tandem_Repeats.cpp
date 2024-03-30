#include <bits/stdc++.h>
//#define int long long
using namespace std;

//using dp

void solve(){
string S; cin >> S; int N = S.size();
vector<vector<int>> lcs(N + 1, vector<int>(N + 1, 0));
int ans = 0;
for(int i = 1 ; i <= N/2 ; ++i){
    for(int j = 1 ; j <= N ; ++j){
        if(i + j > N){
            continue;
        }
        if(S[j - 1] == S[i + j - 1] || S[j - 1] == '?' || S[i + j - 1] == '?'){
            lcs[j][i + j] = lcs[j - 1][i + j - 1] + 1;
            if(lcs[j][i + j] >= i){
                ans = max(ans, i);
                break;
            }
        }
        else{
            lcs[j][i + j] = 0;
        }
    }
}
cout << 2*ans << endl;
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