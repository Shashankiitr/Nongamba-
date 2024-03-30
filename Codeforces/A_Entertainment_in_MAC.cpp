#include <iostream>
#include <string>
using namespace std;

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int n = S.size();
    int start = 0, end = n - 1, flag = 0;
    
    for (; start <= end; start++, end--) {
        if (S[start] < S[end]) {
            flag = 1;
            break;
        } else if (S[start] > S[end]) {
            flag = 2;
            break;
        }
    }
    
    if (flag == 1) {
        cout << S << endl;
    } else if (flag == 2) {
        for (int i = n - 1; i >= 0; i--) {
            cout << S[i];
        }
        cout << S << endl;
    } else {
        cout << S << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    for (int i = 0; i < t; ++i) {
        solve();
    }
    
    return 0;
}
