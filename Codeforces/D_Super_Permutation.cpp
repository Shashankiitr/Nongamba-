#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; 
if(N == 1){
    cout << 1 << endl; return;
}
if(N&1){
cout << -1 << endl;
}
else{
vector<int> A;
for(int i = 0 ; i < N ; i++){
    if(i%2==0){
        A.push_back(N - i);
    }
    else{
        A.push_back(i);
    }
}
for(auto a : A){
    cout << a << " ";
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