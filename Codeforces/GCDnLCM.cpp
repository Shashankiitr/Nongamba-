#include <bits/stdc++.h>
//#define int long long
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b){
    return (a*b)/gcd(a, b);
}

int Mod = 1e9 + 7;

void solve(){
int X, Q; cin >> X >> Q;
vector<int> divisorsofX;
for(int i = 1 ; i*i <= X ; i++){
    if(X%i==0){
        divisorsofX.push_back(i);
        if(i*i!=X){
            divisorsofX.push_back(X/i);
        }
    }
}
sort(divisorsofX.begin(), divisorsofX.end());
cout << endl;
while(Q--){
    int P; cin >> P;
    int ans = 0;
    for(int i = 0 ; i < divisorsofX.size() ; i++){
        int Y = pow(divisorsofX[i], P + 1);
        if(Y%X == 0){
            Y/=X;
            int a = pow(gcd(X, Y), P);
            int b = lcm(X, Y);
            if(a == b && gcd(X, Y) == divisorsofX[i]) ans++;
            ans%=Mod;
        }
    }
    ans%=Mod;
    cout << ans << endl;
}
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