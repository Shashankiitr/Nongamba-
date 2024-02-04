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
bool check(vector<int> &A){
    for(auto &a : A){
        if(a >= 0) return false;
    }
    return true;
}
void solve(){
    int N; cin >> N; vector<int> A(N); for(auto &a : A) cin >> a;
    if(check(A)){
        cout << *max_element(A.begin(), A.end()) << endl; return;
    }
    int curr = 0, ans = -1e6;
    for(int i = 0 ; i < N ; i++){
        curr += A[i]; if(abs(A[i])%2 == abs(A[i - 1])%2 && i!=0) curr = A[i]; if(curr < 0) curr = 0; ans = max(ans, curr);
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false); // fast io
    cin.tie(NULL); // fast io
    cout.tie(NULL); // fast io
    int t;  
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
 
//time complexity: O(N)
//space complexity: O(1)

