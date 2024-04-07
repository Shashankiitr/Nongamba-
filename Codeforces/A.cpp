#include <bits/stdc++.h>
//#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N;
    while(N--){
        string s; cin >> s;
        auto it = s.find("it");
        if (it == string::npos){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}