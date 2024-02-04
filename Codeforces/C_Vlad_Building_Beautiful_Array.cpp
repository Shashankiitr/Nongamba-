#include <bits/stdc++.h>
//#define int long long
using namespace std;

bool Allodd(vector<int> &A){
    for(int i = 0 ; i < A.size() ; i++){
        if(A[i]%2==0){
            return false;
        }
    }
    return true;
}

bool Alleven(vector<int> &A){
    for(int i = 0 ; i < A.size() ; i++){
        if(A[i]%2==1){
            return false;
        }
    }
    return true;
}

void solve(){
int N; cin >> N; vector<int> A(N); for(auto &a : A) cin >> a;
if(Allodd(A) || Alleven(A)){
    cout << "YES" << endl; return;
}
int odd = 0, even = 0;
for(int i = 0 ; i < N ; i++){
    if(A[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
}
sort(A.begin(), A.end());
if(A[0]&1){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
}
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