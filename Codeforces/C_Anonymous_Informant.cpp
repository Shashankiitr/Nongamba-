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
long long N, K; cin >> N >> K;  vector<long long> A(N); for(auto &a : A) cin >> a;
bool X = true; long long P = N - 1;
vector<bool> visited(N, false);
while(K--){
    if(A[P] > N){
        X = false;
        break;
    }
    if(visited[P] == true) break;
    visited[P] = true;
    P = (P - A[P] + N) % N;
}
cout << (X ? "YES" : "NO") << endl;
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
