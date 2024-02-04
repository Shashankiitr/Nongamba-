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
string x, s; int n, m;
cin >> n >> m;
cin >> x >> s;
for(int i = 0 ; i < m ; i++){
    if(x.length() > 52){
        break;
    }
    if(x.find(s) != string::npos){
        cout << i << endl;
        return;
    }
    else{
        x += x;
    }
}
cout << -1 << endl;
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
