#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<pair<int, int>> A(N - 1);
for(int i = 0 ; i < N - 1 ; i++){
    cin >> A[i].first >> A[i].second;
}
int ans = 0; map<int, bool> M; M[1] = true;
while(A.size() != 0){
    for(int i = 0 ; i < A.size() ; ){
        if(M[A[i].first] == true && M[A[i].second] == false){
            M[A[i].second] = true;
            A.erase(A.begin() + i);
        }
        else{
            i++;
        }
    }
    ans++;
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

//time complexity: O(N^2)