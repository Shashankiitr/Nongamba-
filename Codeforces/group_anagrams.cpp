#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<string> A(N); for(auto &a : A) cin >> a;
vector<pair<string, string>> B(N); 
for(int i = 0 ; i < N ; i++){
    B[i].first = A[i]; B[i].second = A[i];
    sort(B[i].first.begin(), B[i].first.end());
}
sort(B.begin(), B.end());
vector<vector<string>> ans;
for(int i = 0 ; i < N ; i++){
    vector<string> temp;
    temp.push_back(B[i].second);
    while(i+1 < N && B[i].first == B[i+1].first){
        temp.push_back(B[i+1].second);
        i++;
    }
    ans.push_back(temp);
}
for(auto &a : ans){
    for(auto &b : a){
        cout << b << " ";
    }
    cout << endl;
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