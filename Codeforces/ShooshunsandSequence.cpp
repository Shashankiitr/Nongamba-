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
int N, K; cin >> N >> K;
vector<int> A(N);
for(auto &a : A) cin >> a;
if(N == 1){
    cout << 0 << endl;
    return;
}
int count = 1;
for(int i = N - 1 ; i > 0 ; i--){
    if(A[i] != A[i - 1])
        break;
    count++;
}
//cout << "count: " << count << endl;
if(count == N){
    cout << 0 << endl;
    return;
}
bool flag = true;
for(int i = K-1 ; i < N -1 ; i++){
    if(A[i] != A[i + 1]){
        flag = false;
        break;
    }
}
//cout << "flag: " << flag << endl;
if(flag == false){
    cout << -1 << endl;
    return;
}
else{
    if(count == N - K + 1)
        cout << K - 1 << endl;
    else    
        cout << N - count << endl;
}
}
 
int main(){
    ios_base::sync_with_stdio(false);//fast io
    cin.tie(NULL);//fast io
    cout.tie(NULL);//fast io
    //int t;  
    //cin >> t;
    //while(t--){
        solve();
    //}
    return 0;
}
