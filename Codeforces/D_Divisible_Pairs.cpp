#include <iostream>
#include <map>
#include <random>

#define int long long

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--) {
        int n, x, y;
        cin >> n >> x >> y;
        map<pair<int, int>, int> freq;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int cur;
            cin >> cur;
            pair<int, int> pJ = {(-cur) % x, cur % y};
            pJ.first = (pJ.first + x) % x;
            if (freq.count(pJ))
                ans += freq[pJ];
            const pair<int, int> pI = {cur % x, cur % y};
            freq[pI]++;
        }

        cout << ans << endl;
    }

    return 0;
}
