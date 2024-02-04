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
    int N; cin >> N; vector<long long> A(N), B; 
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 2 ; i <= 10 ; i++){
        long long X = i;
        B = A;
        for(auto &j : B){
            j = j % X;
        }   
        sort(B.begin(), B.end());
        int distinct = 0;
        for(int j = 0 ; j < N - 1 ; j++){
            if(A[j + 1] - A[j] != 0){
                distinct++;
            }
        }
        if(distinct > 1){
            continue;
        }
        else{
            cout << X << endl;
            return;
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
