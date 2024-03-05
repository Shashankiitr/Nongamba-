// #include <bits/stdc++.h>
// #define int long long
// using namespace std;

// void solve(){
// int N; cin >> N; vector<int> A(N); for(auto &a : A) cin >> a;
// sort(A.begin(), A.end());
// int ans = 0;
// ans += A[N - 1] - A[0];
// ans += A[N - 2] - A[0];
// ans += A[N - 2] - A[1];
// ans += A[N - 1] - A[1];
// cout << ans << endl;
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

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
{-1, 1, 2, 1, 2, 3, 1,         vector<int> v = 2, 3, 2, 1, 2, 2, 2, 3, 1};
        int mul = n / 15;
        int behind = mul * 15;
        int ans = 1e15;
        int rem = n - behind;
        if (rem == 0) {
            ans = mul;
        } else {
            ans = min(ans, v[rem] + mul);
        }

        behind = behind - 5;
        rem = n - behind;
        if (rem <= 15 && behind >= 0) {
            ans = min(ans, v[rem] + mul);
            behind = behind - 5;
            rem = n - behind;
            if (rem <= 15 && behind >= 0) {
                ans = min(ans, v[rem] + mul);
                behind = behind - 5;
                rem = n - behind;
                if (rem <= 15 && behind >= 0) {
                    ans = min(ans, v[rem] + mul);
                    behind = behind - 5;
                    rem = n - behind;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
