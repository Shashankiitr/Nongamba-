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
    long long N, K; cin >> N >> K; vector<long long> A(N); for(int i = 0 ; i < N ; i++) cin >> A[i];
    
    if(K >= 3){
        cout << 0 << endl;
        return;
    }

    if(K==1){
        sort(A.begin(), A.end());
        long long D = A[N-1] - A[0];
        for(int i = 1 ; i < N ; i++){
            long long X = A[i] - A[i-1];
            if(X < D) D = X;
        }
        long long P = A[0];
        if(P < D){
            cout << P << endl;
        }
        else{
        cout << D << endl;
    }
        return;
    }
    
    sort(A.begin(), A.end());
    long long D = A[1] - A[0];
    for(int i = 1 ; i < N ; i++){
        long long X = A[i] - A[i-1];
        if(X < D) D = X;
    }

    A.push_back(D);
    sort(A.begin(), A.end());
    for(int i = 1 ; i < N+1 ; i++){
        long long X = A[i] - A[i-1];
        if(X < D) D = X;
    }
    long long P = A[0];
    if(P < D){
        cout << P << endl;
    }
    else{
        cout << D << endl;
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
