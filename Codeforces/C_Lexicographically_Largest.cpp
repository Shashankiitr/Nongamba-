#include <iostream>
#include <map>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> cnt;

        for (int i = 1; i <= n; i++) {
            int a; cin >> a; cnt[a + i]++;
        }

        int i = 1;
        while(i <= n) {
            auto it = --cnt.end();
            pair<int, int> P = *it;
            cout << it->first << " ";
            if (P.second > 1)
                cnt[P.first - 1] += P.second - 1;
            i++;
            cnt.erase(it);

        }
        cout << endl;
        }
    return 0;
}
