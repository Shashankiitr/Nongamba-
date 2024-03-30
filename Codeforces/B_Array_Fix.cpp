#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<int> A(N); for(auto &a : A) cin >> a;
int current = 0;
for(int i = 0 ; i < N ; ++i){
    if(A[i] < current){
        cout << "NO" << endl;
        return;
    }
    else{
        int first = A[i]/10, second = A[i]%10;
        if(first >= current){
            if(second >= first){
                current = second;
            }
            else{
                current = A[i];
            }
        }
        else{
            current = A[i];
        }
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