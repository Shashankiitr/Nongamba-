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
vector<pair<int, int>> odd, even;

for(int i = 1 ; i <= n ; i++){
    int x; cin >> x;
    if(x&1){
        odd.push_back(make_pair(x, i));
    }
    else{
        even.push_back(make_pair(x, i));
    }
}

//case 1 o o o
if(odd.size()>=3){
    cout << "YES" << endl;
    cout << odd[0].second << " " << odd[1].second << " " << odd[2].second << endl;
}//case 2 e e o
else if(odd.size() >= 1 && even.size() >= 2){
    cout << "YES" << endl;
    cout << odd[0].second << " " << even[0].second << " " << even[1].second << endl;
}
else{
    cout << "NO" << endl;
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
