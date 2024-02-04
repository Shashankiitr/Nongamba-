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
int N, K; cin >> N >> K; vector<int> A(N), B(N); A[0]= 1;
for(int i = 1 ; i < N ; i++){
    cin >> A[i];
}
for(auto &b : B) cin >> b;
int ans = 0; sort(A.begin(), A.end()); sort(B.begin(), B.end());
int i = 0, j = 0;
while(i < N && j < N){
    if(A[i] < B[j]){
        i++; j++; ans++;
    }
    else{
        j++;
    }
}
cout << N - ans << endl;
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
