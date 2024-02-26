#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int K, X, A, first = 0, flag = 1, V, ans, i = 0; cin >> K >> X >> A;

while(i < X){
    if(flag){
            V = (first + K - 1)/(K - 1);
            if(V == 0){
                first += 1;
            }
            else{
                first += V;
            }
            if(first <= A){
                flag = 1;
            }
            else{
                flag = 0;
            }
    }
    else{
        break;
    }
    i++;
    }

    ans = (K*(A - first));
    if(ans > A){
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