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

void solve(){
    int N; cin >> N; vector<pair<int, int>> A(N);
    for(auto &a : A) cin >> a.first >> a.second;
    int maxm = -1, maxm_idx = -1;
    for(int i = 0 ; i < N ; i++){
        if(A[i].first <= 10){
            if(A[i].second > maxm){
                maxm = A[i].second;
                maxm_idx = i;
            }
        }
    }
    cout << maxm_idx + 1 << endl;
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

