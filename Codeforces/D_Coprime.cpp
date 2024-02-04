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
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}
void solve(){
int n; cin >> n;

vector<int> A(1001, -1); // to store the max index of Ai
for(int i = 0 ; i < n ; i++){
    int a; cin >> a;
    A[a] = i + 1;
}
int ans = -1;
for(int i = 1 ; i < 1001 ; i++){
    for(int j = i ; j < 1001 ; j++){
        if(A[i] > 0 && A[j]>0){
            //both are present in the array
            if(gcd(i, j) == 1){
                ans = max(ans, A[i] + A[j]);
            }
        }
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
