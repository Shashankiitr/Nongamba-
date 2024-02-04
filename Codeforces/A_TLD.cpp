#include <bits/stdc++.h>
//#define int long long
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
string S, A; cin >> S; 
reverse(S.begin(), S.end());
int N = S.size();

for(int i = 0 ; i < N ; i++){
    if(S[i] == '.'){
        A = S.substr(0, i);
        break;
    }
}
reverse(A.begin(), A.end());
cout << A << endl;
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