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
// 1 3 6 10 15 21 28 36 45 55 from 0 to 10
void solve(){
string S; cin >> S; long long ans = 1, X;
for(auto c : S){
    X = c - '0'; ans *= (X + 1)*(X + 2); ans /= 2;
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

//time complexity: O(n)
//space complexity: O(1)