// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>
// #include <map>
// #include <queue>
// #include <stack>
// #include <cmath>
// #include <cstring>
// #include <cstdio>
// #include <numeric>
// using namespace std;

// void solve(){
// long long m, n; cin >> m >> n; // n = number of elements in array, m = number of queries
// vector<long long> V(n, 0), V1(n, 0), diff(n + 1, 0), diff1(n + 1, 0);
// //apply difference array with input m queries
// for(long long i = 0 ; i < m ; i++){
//     long long l, r; cin >> l >> r; l--; r--;
//     if(l!=0){
//     diff[l] += 1;
//     diff[r + 1] -= 1;}

//     if(r!=m-1){
//     diff1[l] += 1;
//     diff1[r + 1] -= 1;
//     }
// }
// //prefix sum of diff and adding it to a
// for(int i = 0 ; i < n ; i++){
//     if(i == 0){
//         V[i] += diff[i];
//         V1[i] += diff1[i];
//     }
//     else{
//         diff[i] += diff[i - 1]; diff1[i] += diff1[i - 1];
//         V[i] += diff[i]; V1[i] += diff1[i];
//     }
// }
// // for(auto &x : V) cout << x << " "; cout << "\n";
// // cout << "\n";
// // for(auto &x : V1) cout << x << " "; cout << "\n";
// long long maxm = *max_element(V.begin(), V.end()); long long maxm1 = *max_element(V1.begin(), V1.end());
// long long minm = *min_element(V.begin(), V.end()); long long minm1 = *min_element(V1.begin(), V1.end());

// if(maxm - minm > maxm1 - minm1){
//     cout << maxm - minm << "\n";
// }
// else{
//     cout << maxm1 - minm1 << "\n";
// }

// //make V = 0 again
// }
 
// int main(){
//     ios_base::sync_with_stdio(false);//fast io
//     cin.tie(NULL);//fast io
//     cout.tie(NULL);//fast io
//     int t;  
//     cin >> t;
//     while(t--){
//         //cout << t << " - " <<endl;
//         solve();
//     }
//     return 0;
// }

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

void solve() {
    long long m, n;
    cin >> m >> n; // n = number of elements in array, m = number of queries
    vector<long long> V(n, 0), V1(n, 0), diff(n + 1, 0), diff1(n + 1, 0);

    // Apply difference array with input m queries
    for (long long i = 0; i < m; i++) {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;

        if (l != 0) {
            diff[l] += 1;
            diff[r + 1] -= 1;
        }

        if (r != m - 1) {
            diff1[l] += 1;
            diff1[r + 1] -= 1;
        }
    }

    // Prefix sum of diff and adding it to V and V1
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            V[i] += diff[i];
            V1[i] += diff1[i];
        } else {
            diff[i] += diff[i - 1];
            diff1[i] += diff1[i - 1];
            V[i] += diff[i];
            V1[i] += diff1[i];
        }
    }

    // Find the maximum difference between elements
    long long maxm = *max_element(V.begin(), V.end());
    long long maxm1 = *max_element(V1.begin(), V1.end());
    long long minm = *min_element(V.begin(), V.end());
    long long minm1 = *min_element(V1.begin(), V1.end());

    if (maxm - minm > maxm1 - minm1) {
        cout << maxm - minm << "\n";
    } else {
        cout << maxm1 - minm1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
