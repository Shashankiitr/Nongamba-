#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N, X; cin >> N >> X;
vector<int> A(N); for(auto &a : A) cin >> a;
sort(A.begin(), A.end());
int ans = 0;
int i = 0, j = N - 1;
while(i < j){
    if(A[i] + A[j] <= X){
        j--; i++; ans++;
    }
    else{
        ans+=2; j--;
    }
}
cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}