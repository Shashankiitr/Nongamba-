#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int n;
    cin >> n;

    if (n <= 28)
    {
        cout << "aa";
        cout << char('a' + n - 2 - 1) << endl;
    }
    else if (n > 28 && n <= 53)
    {
        cout << "a";
        cout << char('a' + n - 27 - 1);
        cout << "z" << endl;
    }
    else
    {
        cout << char('a' + n - 52 - 1);
        cout << "zz" << endl;
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