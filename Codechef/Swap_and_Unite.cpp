#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int n = s.size();
    int manual = INT_MAX;
    for (int i = 0; i < 26; i++) {
        char x = 'a' + i;
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (s[j] == x) {
                cnt++;
            }
        }
        if (cnt == 0) {
            continue;
        }
        int l = 0;
        int r = cnt - 1;
        int cntextra = 0;
        for (int j = l; j <= r; j++) {
            if (s[j] != x) {
                cntextra++;
            }
        }
        int ans = cntextra;
        while (r <= n - 1) {
            ans = min(ans, cntextra);
            if (s[l] != x) {
                cntextra--;
            }
            l++;
            r++;
            if (r <= n - 1 && s[r] != x) {
                cntextra++;
            }
        }
        manual = min(ans, manual);
    }
    cout << manual << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
