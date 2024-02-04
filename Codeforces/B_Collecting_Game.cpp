#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <numeric>
#define ll long long
using namespace std;

void solve(){
    int N; cin >> N; vector<pair<int, int>> A(N);
    for(int i = 0 ; i < N ; i++){
        cin >> A[i].first;
        A[i].second = i;
    }
    sort(A.begin(), A.end());

    vector<ll> pref(N);
    pref[0] = A[0].first;
    for(int i = 1 ; i < N ; i++){
        pref[i] = pref[i-1] + A[i].first;
    }

    vector<int> ans(N);
    for(int i = 0 ; i < N ; i++){
       int low = i, high = N - 1, j = i;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (pref[mid] >= A[j].first) {
                j = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        ans[A[i].second] = j;
    }
    for(auto i: ans) cout << i << " ";
    cout << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);//fast io
    cin.tie(NULL);//fast io
    cout.tie(NULL);//fast io
    int t;  
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

//time complexity: O(NlogN)
