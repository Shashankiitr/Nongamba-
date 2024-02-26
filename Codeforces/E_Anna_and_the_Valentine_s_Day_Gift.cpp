// #include <bits/stdc++.h>
// //#define int long long
// using namespace std;

// void solve(){
// int N, Xl cin >> N >> X; vector<int> A(N); for(auto &a : A) cin >> a; sort(A.begin(), A.end());
// vector<string> B(N); 
// for(int i = 0 ; i < N ; i++){
//     B[i] = to_string(A[i]);
// }
// while(B.size != 1){
    
// }
// }

// int32_t main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a[300009];

    cin >> n;
    map<int, int> cnt;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        cnt[a[i] + i]++;
    }

    for (int i = 1; i <= n; i++) {
        auto it = --cnt.end();
        int x = it->first;
        int c = it->second;
        cnt.erase(it);
        cout << x << " ";
        if (c > 1)
            cnt[x - 1] += c - 1;
    }
    cout << endl;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        solve();
    }

    return 0;
}