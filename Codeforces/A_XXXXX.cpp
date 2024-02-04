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

int n, x, j = 0, sum = 0, ans = -1; cin >> n >> x;
vector<int> a(n); for(auto &y : a) cin >> y;

for(int i = 0 ; i < n ; i++){
    for(j = i ; j < n && sum%x != 0 ; j++){
        sum+=a[j];
    }
    ans = max(ans, j - i); sum-=a[i];
}

if(ans){
    cout << ans << endl;
}
else{
    cout << -1 << endl; 
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
