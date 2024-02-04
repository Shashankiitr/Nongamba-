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
int N; cin >> N; vector<int> A(N); for(auto &a : A) cin >> a;
// odd 2 even 1
if(N==1){
    cout << 0 << endl; return;
}
cout << N - 1 << endl;
cout << 1 << " " << N << endl;
for(int i = 1 ; i < N - 1 ; i++){
    if((A[0] + A[i])%2 == 0){
        cout << i + 1 << " " << N << endl;
    }
    else{
        cout << 1 << " " << i + 1 << endl;
    }
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
