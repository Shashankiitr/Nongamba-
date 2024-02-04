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
// int a, b, n , m, rem; cin>>a>>b>>n>>m;
// rem = n%(m + 1);
// long long ans = (long long)a*n;
// if(ans > (long long)b*n){
//     ans = (long long)b*n;
// }
// long long ans1 = (long long)(a*(n/(m + 1))) + (long long)(rem*min(a, b));
// if(ans > ans1){
//     ans = ans1;
// }
// cout << ans << endl;
// //cout << min(min(a*n, b*n), );
// }
 
// int main(){
//     ios_base::sync_with_stdio(false);//fast io
//     cin.tie(NULL);//fast io
//     cout.tie(NULL);//fast io
//     int t;  
//     cin >> t;
//     while(t--){
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

void solve(){
    int a, b, n, m, rem; 
    cin >> a >> b >> n >> m;
    rem = n % (m + 1);
    long long ans = (long long)a * n;
    if (ans > (long long)b * n){
        ans = (long long)b * n;
    }
    long long ans1 = (long long)(2*a * (n / (m + 1))) + (long long)(rem * min(a, b));
    if (ans > ans1){
        ans = ans1;
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);  // fast io
    cin.tie(NULL);  // fast io
    cout.tie(NULL);  // fast io
    int t;  
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
