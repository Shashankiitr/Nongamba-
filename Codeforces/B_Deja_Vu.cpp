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
int n, q; cin >> n >> q;
vector<int> A(n), X(q);
int M = -1;
for(int i = 0 ; i < n ; i++){
    cin >> A[i];
    M = max(M, A[i]);
}
for(int i = 0 ; i < q ; i++){
    cin >> X[i]; 
}
M = log2(M);
int check = M + 1;
for(int i = 0 ; i < q ; i++){
    if(X[i] <= M && X[i] < check){
        int p = pow(2, X[i]);
        for(int j = 0 ; j < n ; j++){
            if(A[j] % p == 0){
                A[j] += p/2;
            }
        }
        check = X[i];
    }
}
for(int i = 0 ; i < n ; i++){
    cout << A[i] << " ";
}
cout << endl;
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
