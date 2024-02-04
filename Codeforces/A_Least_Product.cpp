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
    int N, neg = 0; cin >> N; bool zero = false; vector<int> A(N);
    for(auto &a : A){
        cin >> a;
        if(a < 0) neg++;
        if(a == 0) zero = true; 
    }

    if(zero){
        cout << 0 << endl;
        return;
    }

    if(neg % 2 == 0){
        cout << 1 << endl;
        cout << 1 << " " << 0 << endl;
        return;
    }

    if(neg % 2 == 1){
        cout << 0 << endl;
        return;
    }


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

