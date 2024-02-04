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
int N; cin >> N;
vector<long long> A(N), B(N); for(auto &a : A) cin >> a;
if(A[0]==1)
    B[0] = 2;
else
    B[0] = 1;
for(int i = 1 ; i < N ; i++){
    if(B[i-1] + 1 == A[i])
        B[i] = B[i-1] + 2;
    else
        B[i] = B[i - 1] + 1;
}
cout << B[N-1] << endl;
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
