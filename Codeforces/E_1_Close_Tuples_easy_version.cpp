#include <bits/stdc++.h>
#define int long long
using namespace std;

int LowerBound(vector<int> &A, int K, int low, int high){
    //sort(A.begin(), A.end());
    int mid;

    while(low <= high){
        mid = low + (high - low + 1)/2;

        if(A[mid] >= K)
            high = mid-1;
        else 
            low = mid+1;
    }
    return low;
}

void solve(){
int N, ans = 0; cin >> N; vector<int> A(N); for(auto &a : A) cin >> a; sort(A.begin(), A.end());
if(N == 1 || N == 2){
    cout << 0 << endl;
    return;
}
for(int j = N - 1 ; j >= 0 ; j--){
    int X = LowerBound(A, A[j] - 2, 0, N - 1);
    //cout << X << endl;
    if(X <= j - 2){
        int P = j - X - 1; P*=(P + 1); P/=2;
        ans += P;
        //cout << P << " ";
    }
    //cout << ans << " " << j << endl;
}
cout << ans << endl;
}
// 1 1 3
// 3 4 2
// 1 5 1
// 5 0
// 5

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