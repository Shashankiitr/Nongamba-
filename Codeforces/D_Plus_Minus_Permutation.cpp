#include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b){
    return a*b/gcd(a, b);
}

void solve(){
int N, X, Y; cin >> N >> X >> Y;
int X_div = N/X, Y_div = N/Y, both_div = N/lcm(X, Y);
X_div-=both_div; Y_div-=both_div; X_div = N - X_div;
int ans = (N*(N+1))/2 - (X_div*(X_div+1))/2 - (Y_div*(Y_div+1))/2;
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