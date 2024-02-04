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
int l1, l2, r1, r2; cin >> l1 >> r1 >> l2 >> r2;
// min elements equal to min = l1 <= r1
// min elements equal to max = l2 <= r2
if(l1 <= r2){
    if(l1 >= l2){
        cout << l1 << endl;
    }
    else{
        if(l2 <= r1){
            cout << l2 << endl;
        }
        else{
            cout << l1 + l2 << endl;
        }
    }
}
else{
    cout << l1 + l2 << endl;
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
