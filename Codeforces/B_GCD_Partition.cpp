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

long long gcd(long long A, long long B){
    if(B){
        // gcd(A, B) = gcd(B, A%B) given A < B 
        return gcd(B, A%B);
    }
    else{
        return A;
    }
}
//O(log(min(A, B)))

void solve(){
int n; cin >> n;
vector<int> A(n); for(auto &a : A) cin >> a;
vector<long long> pref_sum(n);
pref_sum[0] = A[0];
for(int i = 1 ; i < n ; i++){
    pref_sum[i] = pref_sum[i - 1] + A[i];
}
long long  ans = -1;
for(int i = 0 ; i < n - 1 ; i++){
    long long smallAns = gcd(pref_sum[i], pref_sum[n - 1] - pref_sum[i]);
    if(ans < smallAns){
        ans = smallAns;
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
