#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N, sum = 0; cin >> N; vector<int> A(N);
for(int i = 0 ; i < N ; i++){
    cin >> A[i];
    sum += abs(A[i]);
    if(A[i] <= 0) A[i] = 1;
    else A[i] = 0;
}
cout << sum << " ";
int ans = 0;
for(int i = 0 ; i < N ; ){
    if(A[i] == 1){
        ans++;
        int j;
        for(j = i + 1 ; j < N ; j++){
            if(A[j] == 0) break;
        }
        i = j + 1;
    }
    else{
        i++;
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