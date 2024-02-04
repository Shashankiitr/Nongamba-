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
int n, q; cin >> n >> q;
vector<int> A(n); for(auto &a : A) cin >> a;
vector<bool> v(31, false);
while(q--){
    int x; cin >> x;
    if(v[x] == false){
        v[x] = true;
        for(auto &a : A) if(a % (1 << x) == 0) a += (1 << (x - 1));
    }
}
for(auto &a : A) cout << a << " ";
cout << endl;
}
//time complexity : O(n * 31)
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
