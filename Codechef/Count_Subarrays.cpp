#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<int> A(N); for(auto &a : A) cin >> a;
vector<int> pref_sum(N+1, 0);
for(int i = 0; i < N; i++){
    pref_sum[i+1] = pref_sum[i] + A[i];
}
unordered_map<int, int> frequency;
for(int i = 0; i < N+1; i++){
    int j = i;
    while(j < N+1 && pref_sum[j] - pref_sum[i] <= N){
        frequency[pref_sum[j] - pref_sum[i]]++;
        j++;
    }
}
for(int i = 1; i < N+1; i++){
    cout << frequency[i] << " ";
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