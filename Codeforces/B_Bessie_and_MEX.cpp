#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){

//Method - 1
// int N; cin >> N; vector<int> A(N), P(N);
// for(auto &x : A) cin >> x;
// int MEX = N, i = N - 1;
// while(i > -1){
//     if(A[i] > 0){
//         P[i] = MEX - A[i];
//         MEX = P[i];
//     }
//     else{
//         P[i] = MEX - A[i];
//     }
//     i--;
// }

// for(auto &x : P) cout << x << " ";
// cout << endl;


//Method - 2
int N; cin >> N; vector<int> A(N), P(N);
for(auto &x : A) cin >> x;
int MEX = 0;
unordered_map<int , bool> M;
for(int i = 0 ; i < N ; ++i){
    if(A[i] > 0){
        P[i] = MEX;
    }
    else{
        P[i] = MEX - A[i];
    }
    M[P[i]] = true;
    while(M[MEX]) MEX++;
}

for(auto &x : P) cout << x << " ";
cout << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}