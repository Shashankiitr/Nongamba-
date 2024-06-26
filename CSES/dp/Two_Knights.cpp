#include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
//O(log(min(a, b)))

int nCr(int N, int R){
    int a = 1, b = 1; if(N - R < R) R = N - R;
    if(R != 0){
        while(R){
            a *= N; b *= R; int m = gcd(a, b); a /= m; b /= m; N--; R--;
        }
    }
    else{
        return 1;
    }
    return a;
}
//O(N)

void solve(){
int N; cin >> N;
cout << 0 << endl;
for(int i = 2 ; i <= N ; i++){
    int ans = nCr(i*i, 2) - (i - 3 + 1)*(i - 2 + 1)*4;
    cout << ans << endl;
}
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    while(t--){
        solve();
    }
    return 0;
}