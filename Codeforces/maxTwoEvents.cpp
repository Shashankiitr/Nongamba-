#include <bits/stdc++.h>
//#define int long long
using namespace std;

int UpperBound(vector<vector<int>> &A, int K, int low, int high){
    int mid;
    while(low <= high){
        mid = low + (high - low + 1)/2;

        if(A[mid][0] > K)
            high = mid-1;
        else 
            low = mid+1;
    }
    return low;
}

void solve(){
    int N; cin >> N;
    vector<vector<int>> A(N, vector<int>(3));
    for(int i = 0 ; i < N ; i++){
        cin >> A[i][0] >> A[i][1] >> A[i][2];
    }

    sort(A.begin(), A.end());

    map<int, int> mp; int maxm = 0;
    for(int i = N - 1 ; i >= 0 ; i--){
        maxm = max(maxm, A[i][2]);
        mp[i] = maxm;
    }

    for(int i = 0 ; i < N ; i++){
        cout << mp[i] << " ";
    }
    cout << endl;

    int max_ans = 0;
    for(int i = 0 ; i < N ; i++){
        max_ans = max(max_ans, A[i][2]);
        int end_time = A[i][1];
        int next_event = UpperBound(A, end_time, 0, N-1);
        if(next_event < N){
            max_ans = max(max_ans, A[i][2] + mp[next_event]);
        }
    }
    cout << max_ans << endl;

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