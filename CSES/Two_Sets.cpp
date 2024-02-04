#include <bits/stdc++.h>
//#define int long long
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
//O(log(min(a, b)))

int nCr(int N, int R){
    int a = 1, b = 1; if(N - R < R) R = N - R;
    if(R != 0){
        while(R){
            a *= N; b *= R; int m = gcd(a, b); a /= m; b /= m; N--; R--;
        }
    }
    else{
        return 1;
    }
    return a;
}
//O(N)

void solve(){
int N; cin >> N;
if(N%4 == 0){
    cout << "YES" << endl;
    int i = 1, j = N;
    vector<pair<int, int>> ans;
    while(i < j){
        ans.push_back({i, j});
        i++; j--;
    }
    int M = ans.size();
    cout << M << endl;
    for(int i = 0 ; i < M/2 ; i++){
        cout << ans[i].first << " " << ans[i].second << " ";
    }
    cout << endl;
    cout << M << endl;
    for(int i = M/2 ; i < M ; i++){
        cout << ans[i].first << " " << ans[i].second << " ";
    }
    cout << endl;
}
else if((N + 1)%4 == 0){
    cout << "YES" << endl;
    if(N == 3){
        cout << 2 << endl;
        cout << 1 << " " << 2 << endl;
        cout << 1 << endl;
        cout << 3 << endl;
    }
    else{
        int i = 4, j = N;
        vector<pair<int, int>> ans;
        while(i < j){
            ans.push_back({i, j});
            i++; j--;
        }
        int M = ans.size();
        cout << M + 2 << endl;
        for(int i = 0 ; i < M/2 ; i++){
            cout << ans[i].first << " " << ans[i].second << " ";
        }
        cout << 1 << " " << 2 << endl;
        cout << M + 1 << endl;
        for(int i = M/2 ; i < M ; i++){
            cout << ans[i].first << " " << ans[i].second << " ";
        }
        cout << 3 << endl;
    }
}
else{
    cout << "NO" << endl;
}

}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    while(t--){
        solve();
    }
    return 0;
}