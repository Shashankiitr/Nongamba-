#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N, K, Q; cin >> N >> K >> Q; vector<int> A(N), B; for(auto &a : A) cin >> a;
for(int i = 0 ; i < N ; ){
    if(A[i] <= Q){
        int len = 1, j;
        for(j = i + 1 ; j < N ; j++){
            if(A[j] <= Q){
                len++;
            }
            else{
                break;
            }
        }
        B.push_back(len);
        i = j;
    }
    else{
        i++;
    }
}
int ans = 0;
for(int i = 0 ; i < B.size() ; i++){
    if(B[i] == K) ans++;
    else if(B[i] > K){
        int x = B[i] - K + 1;
        ans += x*(x + 1)/2;
    }
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