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
int n; cin >> n;
vector<int> a(2*n);
for(int i = 0; i < 2*n; i++){
    cin >> a[i];
}
// 10 10 20 20 30 30 
sort(a.begin(), a.end());
long long ans = 0;
//difference of adjacent elements ka sum
for(int i = 1; i < n; i++){
    ans += (a[i] - a[i-1]);
}
for(int i = n+1; i < 2*n; i++){
    ans += (a[i] - a[i-1]);
}
cout << ans << endl;
for(int i = 0 ; i < n ; i++){
    cout << a[i] << " " << a[i + n] << endl;
}
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
