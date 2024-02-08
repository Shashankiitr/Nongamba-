#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int x, y; cin >> x >> y;
if(x < y){
    swap(x, y);
}
if(x % y == 0){
    cout << y << endl;
}
else{
    while(x % y != 0){
        x -= (x/y)*y;
        if(x < y){
            swap(x, y);
        }
    }
    cout << y << endl;
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