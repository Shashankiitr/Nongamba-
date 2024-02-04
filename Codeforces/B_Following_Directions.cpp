#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int n; cin >> n; string S; cin >> S;
int x = 0, y = 0;
int N = 0;
bool flag = false;  
while(n--){
    if(S[N] == 'L'){
        x--;
    }
    else if(S[N] == 'R'){
        x++;
    }
    else if(S[N] == 'U'){
        y++;
    }
    else if(S[N] == 'D'){
        y--;
    }
    N++;
    if(x==1 && y==1){
        flag = true;
        break;
    }
}
if(flag){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
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