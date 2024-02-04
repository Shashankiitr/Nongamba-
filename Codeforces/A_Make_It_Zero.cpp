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
int N;cin >> N;
vector<int> A(N); for(auto &a : A) cin >> a;
if(N&1){
    cout << 4 << endl;
    cout << 1 << " " << N-1 << endl;
    cout << 1 << " " << N-1 << endl;
    cout << 2 << " " << N << endl;
    cout << 2 << " " << N << endl;
}
else{
    cout << 2 << endl;
    cout << 1 << " " << N << endl;
    cout << 1 << " " << N << endl;
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
