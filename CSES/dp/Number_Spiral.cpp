#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int x, y; cin >> x >> y;
if(x > y){
    //lower diagonal
    int diagonal = x*x - (x - 1); // x, x ka hae
    if(x&1){
        diagonal -= (x-y);
    }
    else{
        diagonal += (x-y);
    }
    cout << diagonal << endl;
}
else{
    int diagonal = y*y - (y - 1);
    if(y&1){
        diagonal += (y-x);
    }
    else{
        diagonal -= (y-x);
    }
    cout << diagonal << endl;
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