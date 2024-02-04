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
    int N; cin >> N; vector<int> A(N);
    for(int i = 1 ; i < N ; ++i){
        int u, v; cin >> u >> v;
        A[u - 1]++; A[v - 1]++;
    }
    int leaves = 0;
    for(int i = 0 ; i < N ; ++i){
        if(A[i] == 1) leaves++;
    }
    cout << (leaves + 1) / 2 << endl;
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
