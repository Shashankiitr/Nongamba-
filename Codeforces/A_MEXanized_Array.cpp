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
    int N, K, X; 
    cin >> N >> K >> X;
    if(N < K){
        cout << -1 << endl;
        return;
    }
    else{
        if(N == K){
            if(X < K - 1){
                cout << -1 << endl;
                return;
            }
            else{
                cout << K * (K - 1) / 2 << endl;
                return;
            }
        }
    }

    //n > k

    if(X == K | X == K - 1){
        cout << (K * (K - 1) / 2) + (N - K)*(K - 1) << endl;
        return;
    }

    if(X < K - 1){
        cout << -1 << endl;
        return;
    }

    if(X > K){
        cout << (K * (K - 1) / 2) + (N - K)*(X) << endl;
        return;
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
