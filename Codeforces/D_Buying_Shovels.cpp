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
int N, K, ans = 1e9; cin >> N >> K;
if(N <= K){
    cout << 1 << endl; return;
}
for(int i = 1 ; i*i <= N ; i++){
if(N%i == 0){
    if(i <= K) ans = min(ans, N/i);
    if(N/i  <= K) ans = min(ans, i);
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
