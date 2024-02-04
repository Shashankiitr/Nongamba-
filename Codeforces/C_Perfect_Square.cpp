#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <numeric>
using namespace std;

void solve(){
int N; cin >> N;
char a[N][N];
for(int i = 0 ; i < N ; i++){
    for(int j = 0 ; j < N ; j++){
        cin >> a[i][j];
    }
}
int ans = 0;
for(int i = 0 ; i < N/2 ; i++){
    for(int j = 0 ; j <= N - 2*i ; j++){
        int sum = (int)a[i][i + j] + (int)a[i + j][N - i] + (int)a[N - i][N - i - j] + (int)a[N - i - j][i];
        int maxm = max((int)a[i][i + j], max((int)a[i + j][N - i], max((int)a[N - i][N - i - j], (int)a[N - i - j][i])));
        ans += (4*maxm - sum);
        cout << ans << endl;
    }
}
cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);//fast io
    cin.tie(NULL);//fast io
    cout.tie(NULL);//fast io
    int t;  
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
