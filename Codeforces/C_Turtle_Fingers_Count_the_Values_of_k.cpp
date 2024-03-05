#include <bits/stdc++.h>
//#define int long long
using namespace std;

bool check(int x, int a){
    int p = log(x)/log(a);
    return (int)pow(a, p) == x;
}

void solve(){
int a, b, l; cin >> a >> b >> l;
int ans = 0;
for(int k = 1 ; k <= l ; ++k){
    if(l%k == 0){
        int x = l/k;
        if(check(x, a) || check(x, b)) ans++;
        else{
            int y = a*b;
            if(x%y == 0){
                int z = x/y;
                if(check(z, a) || check(z, b))ans++;
            }
        }
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