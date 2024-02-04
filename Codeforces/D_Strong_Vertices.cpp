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
    int N; cin >> N; vector<int> A(N), B(N); 
    for(auto &a : A) cin >> a; for(auto &b : B) cin >> b;
    for(int i = 0 ; i < N ; i++) B[i] = A[i] - B[i];
    int ans = *max_element(B.begin(), B.end()); A.clear();
    for(int i = 0 ; i < N ; i++){
        if(B[i] == ans){
            A.push_back(i + 1);
        }
    }
    cout << A.size() << endl; for(auto &a : A) cout << a << " "; cout << endl;
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
