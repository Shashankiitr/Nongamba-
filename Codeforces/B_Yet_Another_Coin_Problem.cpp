#include <bits/stdc++.h>
#define int long long
using namespace std;
#define max 1e9+7

int getAns(int N){
    int ans = 0;
    ans += N/15;
    N -= (N/15)*15;
    ans += N/6;
    N -= (N/6)*6;
    ans += N/3;
    N -= (N/3)*3;
    ans += N;
    return ans;
}

void solve(){

// solution - 1 : 

// int N; cin >> N; 
// int ans = max;
// for(int one = 0 ; one <= 2 ; ++one){
//     for(int three = 0 ; three <= 1 ; ++three){
//         for(int six = 0 ; six <= 4 ; ++six){
//             for(int ten = 0 ; ten <= 2 ; ++ten){
//                 int X = one + three * 3 + six * 6 + ten * 10;
//                 int left = N - X;
//                 if(left >= 0 && left%15 == 0){
//                     ans = min(ans, one + three + six + ten + left/15);
//                 }
//             }
//         }
//     }
// }
// cout << ans << endl;

//solution - 2:

int N; cin >> N;
if(N < 10){
 cout << getAns(N) << endl;
}
else if(N < 20){
    cout << min(getAns(N - 10) + 1, getAns(N)) << endl;
}
else{
    cout << min({getAns(N), getAns(N - 10) + 1, getAns(N - 20) + 2}) << endl;
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