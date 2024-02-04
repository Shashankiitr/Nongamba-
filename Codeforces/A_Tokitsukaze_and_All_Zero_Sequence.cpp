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
 int N;  cin >> N; vector<int> A(N); for(auto &a : A) cin >> a; sort(A.begin(), A.end());
 if(A[0]==0){
    int count = 1, i = 1;
    while(A[i] == A[i - 1] && i<N){
        count++; i++;
    }
    cout << N - count << endl;
    return;
 }
 else{
    int i = 1;
    while(i<N){
        if(A[i]==A[i-1]){
            cout << N << endl;
            return;
        }
        i++;
    }
 }
 cout << N + 1 << endl;
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
