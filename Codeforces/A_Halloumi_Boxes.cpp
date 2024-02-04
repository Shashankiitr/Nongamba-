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
int N, K; cin >> N >> K; vector<int> A(N); bool sorted = true;
cin >> A[0];
for(int i = 1 ; i < N ; i++){
    cin >> A[i];
    if(A[i] < A[i - 1]){
        sorted = false;
    }
}
if(K == 1 && !sorted){
    cout << "NO" << endl;
}
else{
    cout << "YES" << endl;
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
