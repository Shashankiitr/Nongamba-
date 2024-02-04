#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
string a, b, c; cin >> a >> b >> c;
map<char, int> m;
for(char x : a) m[x]++; for(char x : b) m[x]++; for(char x : c) m[x]++;
if(m['A'] == 2){
    cout << "A" << endl;
}
else if(m['B'] == 2){
    cout << "B" << endl;
}
else if(m['C'] == 2){
    cout << "C" << endl;
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