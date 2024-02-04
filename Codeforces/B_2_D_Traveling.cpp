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
long long N, K, A, B; cin >> N >> K >> A >> B;
A--; B--;
vector<pair<long long, long long>> P(N);
for(int i = 0 ; i < N ; i++){
    cin >> P[i].first >> P[i].second;
}
if(K == 0){
    cout << abs(P[A].first - P[B].first) + abs(P[A].second - P[B].second) << endl;
}
else{
    long long X = INT64_MAX, Y = INT64_MAX;
    for(int i = 0 ; i < K ; i++){
        X = min(abs(P[A].first - P[i].first) + abs(P[A].second - P[i].second), X);
        Y = min(abs(P[i].first - P[B].first) + abs(P[i].second - P[B].second), Y);
    }
    long long ans = abs(P[A].first - P[B].first) + abs(P[A].second - P[B].second);
    cout << min(X + Y, ans) << endl;
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
