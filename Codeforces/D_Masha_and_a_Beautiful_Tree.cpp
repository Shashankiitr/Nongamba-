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
using namespace std;

int help(int l, int r, vector<int> &A){
    if(r-l == 1) return 0;
    int mid = (l + r)/2; int ans = 0;
    int max_left = *max_element(A.begin() + l, A.begin() + mid);
    int max_right = *max_element(A.begin() + mid, A.begin() + r);
    if(max_left > max_right){
        //swap needed
        ans++;
        for(int i = l ; i < mid; i++){
            swap(A[i], A[i + mid - l]);
        }
    }
    return help(l, mid, A) + help(mid, r, A) + ans;
}

void solve(){
    // int N; cin >> N; vector<int> A(N), B; for(auto &a : A) cin >> a;
    // if(N == 1){
    //     cout << 0 << endl; return;
    // }

    // if(N == 2){
    //     cout << (A[0]>A[1] ? "1" : "0") << endl; return;
    // }

    // int diff = 1, swaps = 0;
    // while(A.size() > 1){
    //     B.clear();
    //     for(int i = 0 ; i < A.size() - 1 ; i+=2){
    //         if(abs(A[i] - A[i + 1]) == diff){
    //             B.push_back(max(A[i], A[i + 1]));
    //             if(A[i] > A[i + 1]) swaps++;
    //         }
    //         else{
    //             cout << -1 << endl; return;
    //         }
    //     }
    //     A = B; diff*=2;
    // }
    // cout << swaps << endl;

     int N; cin >> N; vector<int> A(N); for(auto &a : A) cin >> a;
    //  for(auto &a : A) cout << a << " ";
    //  cout << endl;
     int ans = help(0, N, A);
    //  for(auto &a : A) cout << a << " ";
    //  cout << endl;
     if(is_sorted(A.begin(), A.end())){
        cout << ans << endl;
     } 
     else{
        cout << -1 << endl;
     }
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
