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
long long n; cin >> n; string s; cin >> s;
vector<long long> zeroIndex;
for(int i = 0 ; i < n ; i++){
    if(s[i] == '0'){
        zeroIndex.push_back(i);
    }
}
sort(zeroIndex.begin(), zeroIndex.end());
reverse(zeroIndex.begin(), zeroIndex.end()); // max index of nearest zero aggae aa jaye

//for(auto &z : zeroIndex) cout << z << " ";

long long ans = 0;
long long j = 0; // j < zeroIndex ka size
long long m = zeroIndex.size();
for(long long i = n-1 ; i >= 0 ; i--){
    if(j >= m){
        cout << -1 << " ";
        continue;
    }
    else{
        // max nearest index of zero ka iterator
        ans += (i - zeroIndex[j]); cout << ans << " ";
        j++;
    }
}
cout << endl;
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
