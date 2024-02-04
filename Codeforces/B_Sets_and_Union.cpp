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
vector<vector<int>> A;
set<int> S;  //union
for(int i = 0 ; i < N ; i++){
    int M; cin >> M;
    vector<int> B(M);
    for(auto &b : B){ 
        cin >> b;
        S.insert(b);
    } 
    A.push_back(B);
}
if(N==1) {
    cout << 0 << endl;
    return;
}
int Ulen = S.size();
int ans = 0;
for(int i = 0 ; i < Ulen ; i++){
    set<int> temp;
    int top = *S.begin();
    for(int j = 0 ; j < N ; j++){
        if(find(A[j].begin(), A[j].end(), top) == A[j].end()){
            for(auto &a : A[j]){
                temp.insert(a);
            }
    }
    }
    S.erase(top);
    if(temp.size() != Ulen) ans = max(ans, (int)temp.size());
}
cout << ans << endl;  
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

//time complexity: O(N^2)