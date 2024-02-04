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
    long long N, ans = -1; cin >> N; vector<long long> A(N); for(auto &a : A) cin >> a; vector<long long> K; K.push_back(1);
    for(long long i = 2 ; i*i <= N ; ++i){
        if(N%i == 0){
            if(i*i == N){
                K.push_back(i);
            }
            else{
                K.push_back(i); K.push_back(N/i);
            }
        }
    }
    vector<long long> T;
    for(long long i = 0 ; i < K.size() ; ++i){
        for(long long j = 0 ; j < N ; j+=K[i]){
            long long X = 0; for(long long l = 0 ; l < K[i] ; ++l) X += A[j + l]; T.push_back(X);
        }
        sort(T.begin(), T.end()); if(ans < T[(N/K[i]) - 1] - T[0]) ans = T[(N/K[i]) - 1] - T[0]; T.clear();
    }
    cout << ans << endl;
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

//time complexity: O(N*sqrt(N))
//space complexity: O(N)