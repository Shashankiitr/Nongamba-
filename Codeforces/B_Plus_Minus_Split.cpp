#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int n; cin >> n;
string s; cin >> s; int plus = 0, minus = 0;
for(int i = 0 ; i < s.size() ; i++){
    if(s[i] == '+'){
        plus++;
    }
    else{
        minus++;
    }
}
cout << abs(plus - minus) << endl;
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