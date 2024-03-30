#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N, K; cin >> N >> K;
vector<int> A(N), B(N); for(auto &x : A) cin >> x; for(auto &x : B) cin >> x;
sort(A.begin(), A.end()); sort(B.begin(), B.end());

vector<int> A_pairs, B_pairs, A_single, B_single;
for(int i = 0 ; i < N ; ){
    if(i + 1 < N){
        if(A[i] == A[i + 1]){
            A_pairs.push_back(A[i]);
            i += 2;
        }
        else{
            A_single.push_back(A[i]);
            i++;
        }
    }
    else{
        A_single.push_back(A[i]);
        i++;
    }
}
for(int i = 0 ; i < N ; ){
    if(i + 1 < N){
        if(B[i] == B[i + 1]){
            B_pairs.push_back(B[i]);
            i += 2;
        }
        else{
            B_single.push_back(B[i]);
            i++;
        }
    }
    else{
        B_single.push_back(B[i]);
        i++;
    }
}

A.clear(); B.clear();

if(K <= A_pairs.size()){
    for(int i = 0 ; i < K ; i++){
        A.push_back(A_pairs[i]); A.push_back(A_pairs[i]);
        B.push_back(B_pairs[i]); B.push_back(B_pairs[i]);
    }
}
else{
    for(int i = 0 ; i < A_pairs.size() ; i++){
        A.push_back(A_pairs[i]); A.push_back(A_pairs[i]);
        B.push_back(B_pairs[i]); B.push_back(B_pairs[i]);
    }
    for(int i = 0 ; i < 2*(K - A_pairs.size()) ; i++){
        A.push_back(A_single[i]);
        B.push_back(B_single[i]);
    }
}

for(auto x : A) cout << x << " "; cout << endl;
for(auto x : B) cout << x << " "; cout << endl;

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