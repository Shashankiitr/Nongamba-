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
//#define int long long
using namespace std;

void help(string S, set<string> &S1){

    if(S.size() == 1){
        S1.insert(S);
        return;
    }

    // Erase first letter
    string S2 = S.substr(1, S.size() - 1);
    if(S1.find(S2) == S1.end()){
        S1.insert(S2);
        help(S2, S1);
    }

    // Erase second letter
    S2 = S.substr(0, 1) + S.substr(2, S.size() - 2);
    if(S1.find(S2) == S1.end()){
        S1.insert(S2);
        help(S2, S1);
    }

}
void solve(){
    int N; string S; cin >> N >> S; set<char> S1; //S1.insert(S); help(S, S1); cout << S1.size() << endl;
    int ans = 0;
    for(auto &s : S){
        S1.insert(s); ans += S1.size();
    }
    cout << ans << endl;
}
 
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;  
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}



