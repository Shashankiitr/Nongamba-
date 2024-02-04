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
    int N, K; cin >> N >> K; vector<int> A(N), B(N); for(auto &a : A) cin >> a; for(auto &b : B) cin >> b;
    int E = -1, S = 0, Bmin = -1;
    for(int i = 0; i < N && i < K; i++){
        S += A[i]; 
        Bmin = max(Bmin, B[i]);
        E = max(E, S + (K - i - 1) * Bmin);
    }
    cout << E << endl;
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
