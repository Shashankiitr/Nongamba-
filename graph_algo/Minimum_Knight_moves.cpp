#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(int i, int j, int I, int J){
    if(i == I && j == J) return 0;
    if((i < 0 || i >= 8) || (j < 0 && j >= 8)) return 1e4;

    return min(min(min(1 + f(i - 1, j + 2, I, J), 1 + f(i + 1, j + 2, I, J)), min(1 + f(i - 2, j + 1, I, J), 1 + f(i - 2, j - 1, I, J))), min(min(1 + f(i + 1, j - 2, I, J), 1 + f(i - 1, j - 2, I, J)), min(1 + f(i + 2, j - 1, I, J), 1 + f(i + 2, j + 1, I, J))));
}

void solve(){
string A, B; cin >> A >> B;
int i1, j1, i2, j2;
i1 = A[0] - 'a';
i2 = B[0] - 'a';
j1 = 7 - (A[1] - '1');
j2 = 7 - (B[1] - '1');

//cout << i1 << " " << j1 << " " << i2 << " " << j2 << endl;

int ans = f(i1, j1, i2, j2);
cout << ans << endl;
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