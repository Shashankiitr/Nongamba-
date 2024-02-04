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
int N, M, D; cin >> N >> M >> D;
vector<vector<int>> A(N, vector<int>(M));
cin >> A[0][0]; int mod = A[0][0]%D; bool possible = true; int Amax = A[0][0]; int Amin = A[0][0];
for(int i=0; i<N; ++i){
    for(int j=0; j<M; ++j){
        cin >> A[i][j];
        if(A[i][j]%D != mod){
            possible = false;
        }
        //Amax = max(Amax, A[i][j]); Amin = min(Amin, A[i][j]);
    }
}
if(!possible){
    cout << -1 << endl;
    return;
}


int opperation = (int)1e7;

for(int i=0; i<N; ++i){
    for(int j=0; j<M; ++j){
        //int term = A[i][j]; 
        int ans = 0;
        for(int k=0; k<N; ++k){
            for(int l=0; l<M; ++l){
                ans += (int)(abs(A[k][l] - A[i][j])/D);
                //ans += (int)(abs(A[k][l] - term)/D);
                //cout << "term : " << abs(A[k][l] - term)/D << endl;
            }
        }
        opperation = min(opperation, ans);
        //cout << "ans : " << ans << endl;
        //cout << "opperation: " << opperation << endl;
    }
}
cout << opperation-1 << endl;

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
