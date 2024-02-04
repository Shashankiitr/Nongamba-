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
vector<string> v(n);
for(int i = 0 ; i < n ; i++){
    cin >> v[i];
}
map<string, bool> mp;
for(int i = 0 ; i < n ; i++){
    mp[v[i]] = true;
}
for(int i = 0 ; i < n ; i++){
    //cout << it->first << " " << it->second << endl;
    string s = v[i];
    int len = s.length();
    for(int i = 1 ; i < len ; i++){
        string s1 = s.substr(0, i);
        string s2 = s.substr(i, len);
        if(mp[s1] && mp[s2]){
            cout << 1 ;
            return;
        }
        else{
            cout << 0 ;
        }
    }
   // cout << endl;
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
