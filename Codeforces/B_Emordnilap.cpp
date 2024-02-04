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
const int mod = 1000000007;
using namespace std;

void solve(){
long long n, y, ans; cin >> n;
y = ((n-1)*n)%mod;
ans = y;

for(int i = 1 ; i <= n ; i++){
    ans = (ans*(i))%mod;
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
