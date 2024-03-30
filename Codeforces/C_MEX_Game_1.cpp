#include <bits/stdc++.h>
//#define int long long
using namespace std;

int mex(vector<int> const& A) {
    set<int> b(A.begin(), A.end());

    int result = 0;
    while (b.count(result))
        ++result;
    return result;
}
//O(nlogn)

void solve(){
int N; cin >> N; vector<int> A(N), C; for(auto &x : A) cin >> x;
map<int, int> mp;
for(auto x : A) mp[x]++;
vector<pair<int, int>> V, V_1;
for(auto x : mp) V.push_back(x);
sort(V.begin(), V.end());
for(int i = 0 ; i < V.size() ; i++){
    if(V[i].second == 1) V_1.push_back({V[i].first, V[i].second});
    else{
        C.push_back(V[i].first);
    }
}
for(int i = 0 ; i < V_1.size() ; i+=2){
    C.push_back(V_1[i].first);
}
cout << mex(C) << endl;
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