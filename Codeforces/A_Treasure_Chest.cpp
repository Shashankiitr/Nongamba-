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
int x, y, k; cin >> x >> y >> k;
int ans = 0;
if(x < y){
    ans += x;
    if(k >= y - x){
        ans += (y- x);
    }
    else{
        ans += (k + 2*(y - x - k));
    }
}
else{
    ans = x;
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
