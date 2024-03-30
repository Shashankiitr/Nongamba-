#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <map>

using namespace std;

void solve() {
    int t;
    cin >> t; // Number of test cases

    for (int e = 0; e < t; e++) {
        long long n;
        cin >> n;

        vector<long long> a(n);
        map<long long, long long> MAPS;

        for (int q = 0; q < n; q++) {
            cin >> a[q];
            MAPS[a[q]]++;
        }

        int index = 0;
        set<long long> M, N;
        bool k = true, l = true;

        while (MAPS[index] >= 2 && k) {
            M.insert(index); k = false; N.insert(index); index++; k = true;
        }

        if (MAPS[index] <= 0) {
            int r = 0;
            int i = 0;

            while (i < n) {
                if (M.find(a[i]) != M.end()) {
                    M.erase(a[i]);
                }
                if (M.empty()) {
                    r = i + 1;
                    break;
                } else {
                    i++;
                }
            }

            i = r;
            while (i < n) {
                if (N.find(a[i]) != N.end()) {
                    N.erase(a[i]);
                }
                if (i++ < n) {
                    continue;
                } else {
                    break;
                }
            }

            if (N.empty()) {
                cout << 2 << endl << 1 << " " << r << endl << r + 1 << " " << n << endl;
            } else {
                cout << -1 << endl;
            }
        } else {
            cout << -1 << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
