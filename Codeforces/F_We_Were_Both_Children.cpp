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
    int N; cin >> N; vector<int> A(N + 1, 0), B(N + 1, 0);
    for(int i = 0 ; i < N ; i++){
        int x; cin >> x;
        if(x <= N){
            A[x]++;
        }
    }
    for(int i = 1 ; i <= N ; i++){
        for(int j = i ; j <= N ; j += i){
            B[j] += A[i];
        }
    }
    cout << *max_element(B.begin(), B.end()) << endl;
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

