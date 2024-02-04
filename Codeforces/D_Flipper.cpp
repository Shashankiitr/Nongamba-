#include <bits/stdc++.h>
//#define int long long
using namespace std;

bool inc(vector<int> &A){
    for(int i = 0 ; i < A.size() - 1 ; i++){
        if(A[i] > A[i + 1]){
            return false;
        }
    }
    return true;
}

bool dec(vector<int> &A){
    for(int i = 0 ; i < A.size() - 1 ; i++){
        if(A[i] < A[i + 1]){
            return false;
        }
    }
    return true;
}

void solve(){
int N; cin >> N; vector<int> A(N); for(auto &a : A) cin >> a;
if(inc(A)){
    reverse(A.begin(), A.end());
    for(auto &a : A) cout << a << " ";
    cout << endl;
}
else if(dec(A)){
    for(int i = 1 ; i < N ; i++){
        cout << A[i] << " ";
    }
    cout << A[0] << endl;
}
else{
    //increasing part from back
    int i;
    for(i = N - 1 ; i >= 0 ; i--){
        if(A[i] > A[i - 1]){
            break;
        }
    }
    int L, R; R = i - 1;
    for(int j = i ; i < N ; i++){
        cout << A[i] << " ";
    }
    //increasing part from front
    
    for(i = 0 ; i < N ; i++){
        if(A[i] < A[i + 1]){
            break;
        }
    }
    L = i + 1;
    for(int j = R ; j >= L ; j--){
        cout << A[j] << " ";
    }
    for(int j = 0 ; j < L ; j++){
        cout << A[j] << " ";
    }
    cout << endl;  
    //cout << "L = " << L << " R = " << R << endl;

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