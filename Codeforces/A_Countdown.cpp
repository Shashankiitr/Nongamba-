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
string s; cin >> s;
int ans = 0;
for(int i = 0 ; i < s.length() - 1 ; i++){
    if(s[i]!='0'){
        ans += (s[i] - 47);
    }
}
ans += (s[s.length()-1] - 48);
cout <<  ans << endl;
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
