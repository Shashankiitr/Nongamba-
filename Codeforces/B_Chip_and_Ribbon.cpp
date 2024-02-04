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
long long N, ans; cin >> N; vector<int> A(N), B(N); for(auto &a : A) cin >> a; ans = A[0] - 1;
B[0] = A[0];
for(int i = 1 ; i < N ; i++){
    int X = B[i - 1];
    if(X < A[i]){
        B[i] = A[i];
        ans += A[i] - X;
    }
    else{
        B[i] = A[i];
    }
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



