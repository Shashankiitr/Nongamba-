#include <bits/stdc++.h>
//#define int long long
using namespace std;

bool Check(vector<int> &A, int k)
{
    int n = A.size();
    for (int i = n - 1; i >= 0; i--) {
        if (k >= A[i])
            k -= A[i];
    }
    if (k != 0)
        return false;
    else
        return true;
}

void solve(){
int N; cin >> N; vector<int> A = {1}, C(N); 
for(auto &a : C) cin >> a; sort(C.begin(), C.end());
for(int i = 0 ; i < N ; i++){
    if(i == 0){
        if(C[i] == 1){
            continue;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    if(Check(A, C[i])){
        A.push_back(C[i]);
    }
    else{
        cout << "NO" << endl;
        return;
    }
}
cout << "YES" << endl;
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