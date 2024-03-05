#include <bits/stdc++.h>
using namespace std;

void print(string xyz, int a, int b) {
    cout << xyz << " " << a << " " << b << endl;
    cout.flush();
}

void solve() {
    int lower_bound = 0, upper_bound = 0;
    vector<int> candidates;
    string response;
    int n;
    cin >> n;
    cout.flush();

    if (n <= 2) {
        cout << "!" << " " << 0 << " " << 1 << endl;
        cout.flush();
        return;
    }

    int i = 1;
    while (i < n) {
        cout << "?" << " " << lower_bound << " " << lower_bound << " " << i << " " << i << endl;
        cout.flush();
        cin >> response;
        if (response == "<") {
            lower_bound = i;
        }
        i++;
        cout.flush();
    }

    int x = lower_bound + 1, y;
    x = min(x, n - 1);

    upper_bound = lower_bound;
    vector<int> equal_candidates;
    equal_candidates.push_back(lower_bound);

    y = x;
    while(y >= 0){
        y++;
        if(y == n - (n - 5)) break;
    }

    i = 0;
    while (i < n) {
        cout << "?" << " " << lower_bound << " " << upper_bound << " " << lower_bound << " " << i << endl;
        cout.flush();
        cin >> response;
        if (response == "<") {
            upper_bound = i;
            equal_candidates.clear();
            equal_candidates.push_back(i);
        } else if (response == "=") {
            equal_candidates.push_back(i);
        }
        i++;
        cout.flush();
    }

    upper_bound = equal_candidates[0];

    i = 1;
    while (i < equal_candidates.size()) {
        cout << "?" << " " << upper_bound << " " << upper_bound << " " << equal_candidates[i] << " " << equal_candidates[i] << endl;
        cout.flush();
        cin >> response;
        if (response == ">") {
            upper_bound = equal_candidates[i];
        }
        i++;
        cout.flush();
    }
    string xyz = "!";
    print(xyz, lower_bound, upper_bound);
}

int main() {
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
