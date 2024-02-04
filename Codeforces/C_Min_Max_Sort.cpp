#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<int> A(N), B;   
for(auto &a : A) cin >> a;
B = A; sort(B.begin(), B.end());
int left = 0, right = N-1;
int ans = 0;
while(left < right){
    int left_index = find(A.begin(), A.end(), B[left]) - A.begin();
    int right_index = find(A.begin(), A.end(), B[right]) - A.begin();
    if(left_index > right_index || (left_index < right_index && right_index - left_index < right - left)){
       A.erase(A.begin() + left_index);
       A.erase(A.begin() + right_index - 1);
       A.push_back(right);
       A.insert(A.begin(), left);
       right--; left++; ans++;
    }
    }
    cout << ans << endl;
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