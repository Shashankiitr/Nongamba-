#include <bits/stdc++.h>
//#define int long long
using namespace std;

int find_count(string parent, string child){
    int count = 0;
    int n = parent.length();
    int m = child.length();
    for(int i = 0; i < n - m + 1; i++){
        if(parent.substr(i, m) == child){
            count++;
        }
    }
    return count;
}

void solve(){
int N; cin >> N; string S; cin >> S;
string X = "map", Y = "pie", Z = "mapie";
int Xcount = 0, Ycount = 0, Zcount = 0;
Xcount = find_count(S, X);
Ycount = find_count(S, Y);
Zcount = find_count(S, Z);
int ans = Xcount + Ycount - Zcount;
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