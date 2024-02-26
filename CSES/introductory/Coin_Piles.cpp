#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int A, B; cin >> A >> B; if(A < B) swap(A, B);
if(A%2 == 0 && B%2 == 0){
    if(A/2 == B) cout << "YES" << endl;
    else if((2*A - B)%3 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}
else{
    if((2*A - B)%3 == 0) cout << "YES" << endl;
    else cout << "YES" << endl;
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