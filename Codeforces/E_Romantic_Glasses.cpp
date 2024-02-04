#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; int A[N];
for(int i = 0 ; i < N ; i++){
    cin >> A[i];
    if(i&1) A[i]*=(-1);
}
int sum = 0; set<int> S;
for(int i = 0 ; i < N ; i++){
    sum+=A[i];
    if(sum == 0 || S.find(sum) != S.end()){
        cout << "YES" << endl;
        return;
    }
    S.insert(sum);
}
cout << "NO" << endl;
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

//time complexity: O(N)
//space complexity: O(N)