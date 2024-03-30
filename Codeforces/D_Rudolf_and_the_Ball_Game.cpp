#include <bits/stdc++.h>
#define int long long
using namespace std;

int left(int var, int Y, int N){
    int p;
    if((var + Y)%N == 0) p = N;
    else p = (var + Y)%N;
    return p;
}

int right(int var, int Y, int N){
    int q;
    if((var + (N - Y))%N == 0) q = N;
    else q = (var + (N - Y))%N;
    return q;
}

void solve(){
int N, M, X; cin >> N >> M >> X;
set<int> s; s.insert(X);
int i = 0;
while(i<M) {
    int Y, p, q; char Z; cin >> Y >> Z;
    set<int> temp;
    if (Z == '0') {
        for (auto var : s) {
            temp.insert(left(var, Y, N)); 
        }
    }else if (Z == '?') {
        for (auto var : s) {
            temp.insert(left(var, Y, N));
            temp.insert(right(var, Y, N));
        }
    }else if(Z == '1') {
        for (auto var : s) {
            temp.insert(right(var, Y, N));
        }
    }
    s = temp; i++;
}
int K = s.size();
cout << K << endl;
vector<int> ans;
for(auto var : s){
    ans.push_back(var);
}
sort(ans.begin(), ans.end());
for(auto var : ans){
    cout << var << " ";
}
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
