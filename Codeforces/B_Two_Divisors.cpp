#include <bits/stdc++.h>
//#define int long long
using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

void solve(){
int A, B; cin >> A >> B;
if(gcd(A, B) == A){
    cout << B*(B/A) << endl;
}
else{
    cout << A*(B/gcd(A, B)) << endl;
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