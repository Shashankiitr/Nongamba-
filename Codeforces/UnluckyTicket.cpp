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
int N; cin >> N;
int len = 2*N;
string S; cin >> S;
vector<int> V(len), A(N), B(N);
for(int i = 0 ; i < len ; i++){
    V[i] = S[i] - '0';
}
//make half
for(int i = 0 ; i < N ; i++){
    A[i] = V[i];
    B[i] = V[i + N];
}

sort(A.begin(), A.end()); sort(B.begin(), B.end());
bool increasing = true, decreasing = true;
for(int i = 0 ; i < N ; i++){
    if(A[i] > B[i]){
        increasing = false;
        break;
    }
    if(A[i] == B[i]){
        increasing = false;
        break;
    }
}
for(int i = 0 ; i < N ; i++){
    if(A[i] < B[i]){
        decreasing = false;
        break;
    }
    if(A[i] == B[i]){
        decreasing = false;
        break;
    }
}
if(increasing || decreasing)
    cout << "YES" << endl;
else
    cout << "NO" << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);//fast io
    cin.tie(NULL);//fast io
    cout.tie(NULL);//fast io
    // int t;  
    // cin >> t;
    // while(t--){
         solve();
    // }
    // return 0;
}
