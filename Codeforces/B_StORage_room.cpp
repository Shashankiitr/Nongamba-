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
int N; cin >> N; vector<vector<int>> A(N, vector<int>(N)); vector<int> B(N);
for(int i = 0 ; i < N ; i++){
    for(int j = 0 ; j < N ; j++){
        cin >> A[i][j];
    }
}

for(int i = 0 ; i < N ; i++){
    int X = pow(2, 30) - 1;
    for(int j = 0 ; j < N ; j++){
        if(i != j){
            X &= A[i][j];
        }
    }
    B[i] = X;
}

//check
for(int i = 0 ; i < N ; i++){
    for(int j = 0 ; j < N ; j++){
        if(i != j && (A[i][j] != (B[i] | B[j]))){
            cout << "NO" << endl;
            return;
        }
    }
}

cout << "YES" << endl;
for(auto &b : B) cout << b << " ";
cout << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);//fast io
    cin.tie(NULL);//fast io
    int t;  
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
