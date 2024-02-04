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
int N, P; cin >> N >> P;
vector<int> A(N), B(N);

for(auto &a : A) cin >> a;
for(auto &b : B) cin >> b;

vector<pair<int, int>> BA(N);
for(int i = 0 ; i < N ; i++){
    BA[i] = make_pair(B[i], A[i]);
}

sort(BA.begin(), BA.end());

long long cost = P; int M = N - 1;
for(int i = 0 ; i < N, M > 0 ; i++){
    if(BA[i].first < P){
        cost += min(M, BA[i].second)*BA[i].first; M -= min(M, BA[i].second);
    }
    else{
        break;
    }
}


cout << cost + M*P << endl;
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
