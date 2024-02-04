#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; string A, B; cin >> A;
B = A; reverse(B.begin(), B.end());
int one = 0, zero = 0; bool flag = true; int i;
for(i = 0; i < N/2 ; i++){
if(A[i] == '1') one++;
if(B[i] == '1') one++;
if(A[i] == '0') zero++;
if(B[i] == '0') zero++;

if(zero != one){
    flag = false;
    break;
}
}
int ans = 0;
//if(N&1) ans++;
if(!flag){
    ans = N - 2*i;    
}
else{
    if(N&1) ans++;
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