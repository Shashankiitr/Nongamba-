#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int N, M; cin >> N >> M;
vector<int> A(M); for(auto &a : A) cin >> a; sort(A.begin(), A.end());
vector<int> gaps; gaps.push_back(A[0] - 1 + N - A[M - 1]);

for(int i = 0 ; i < M - 1 ; i++){
    gaps.push_back(A[i + 1] - A[i] - 1);
}

sort(gaps.begin(), gaps.end());reverse(gaps.begin(), gaps.end());

int seconds = 0, ans = 0;
for(auto &gap : gaps){
    if(gap - 2*seconds > 0){
        int left = gap - 2*seconds - 1;
        if(left){
            ans += left;
        }
        else{
            ans++;
        }
        seconds+=2;
    }
    else{
        break;
    }
}
cout << N - ans << endl;
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

