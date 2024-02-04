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
int N, M; cin >> N >> M;
vector<int> A(N), B(M);
int XORinitial = 0;
for(auto &a : A){
    cin >> a;
    XORinitial^=a;
}
int orB = 0;
for(auto &b : B){
    cin >> b;
    orB|=b;
}

int XORmin = 0, XORmax = 0;
if(N&1){
    XORmin = XORinitial;
    for(int i = 0; i < N; i++){
        XORmax^=(A[i]|orB);
    }
}
else{
    XORmax = XORinitial;
    for(int i = 0; i < N; i++){
        XORmin^=(A[i]|orB);
    }
}

cout << XORmin << " " << XORmax << endl;
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
