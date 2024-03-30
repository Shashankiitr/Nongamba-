#include <bits/stdc++.h>
//#define int long long
using namespace std;
vector<int> A = {10, 11, 100, 110, 101, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11111, 100000};
void solve(){
int N; cin >> N;
for(int i = A.size() - 1 ; i >= 0 ; i--){
    while(N % A[i] == 0) N /= A[i];
}
if(N == 1) cout << "YES" << endl;
else cout << "NO" << endl;
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