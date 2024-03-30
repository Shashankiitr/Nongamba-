#include <bits/stdc++.h>
//#define int long long
using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

void solve(){
int L, R; cin >> L >> R;
if((L%2 == 0 && R%2 == 1) || (L%2 == 1 && R%2 == 0)){
    for(int i = L + 1 ; i <= R; i++){
        cout << i << " ";
    }
    cout << L << endl;
}
else if(L%2 == 1 && R%2 == 1){
    if(gcd(L, R) == 1){
        for(int i = L + 1 ; i <= R; i++){
            cout << i << " ";
        }
        cout << L << endl;
    }
    else{
        vector<int> ans;
        for(int i = L + 1 ; i <= R; i++){
            ans.push_back(i);
        }
        ans.push_back(L);
        int N = ans.size();
        int i;
        for(i = 0 ; i < N - 1 ; i++){
            if((gcd(ans[i] - 1, L) == 1) && (gcd(ans[i], R) == 1)){
                swap(ans[i], ans[N-1]);
                break;
            }
        }
        if(i == N - 1){
            cout << -1 << endl;
        }
        else{
            for(int i = 0 ; i < N ; i++){
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
}
else{
    cout << -1 << endl;
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