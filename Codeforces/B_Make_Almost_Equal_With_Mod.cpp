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
#define int long long
using namespace std;

void solve(){
    int N; cin >> N; vector <int> A(N); for (auto &a : A) cin >> a;
    
    int K = 2;
    while(true){
        set<int> s;
        for (auto a : A){
            s.insert(a % K);
        }
        
        if (s.size() == 2){
            cout << K << endl;;
            return;
        }
        
        K *= 2;
    }
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

