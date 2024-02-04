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
//#define int long long
using namespace std;

void solve(){
    int A[3]; cin >> A[0] >> A[1] >> A[2]; sort(A, A + 3); if(A[2] + A[1] >= 10){ cout << "YES" << endl; return; } 
    cout << "NO" << endl;
}
 
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;  
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

