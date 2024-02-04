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
vector<pair<int, int>> V(n);
for(int i = 0 ; i < n ; i++){
    cin >> V[i].second;
}
for(int i = 0 ; i < n ; i++){
    cin >> V[i].first;
}
sort(V.begin(), V.end());
for(auto &v : V){
    cout << v.first << " " << v.second << endl;
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
