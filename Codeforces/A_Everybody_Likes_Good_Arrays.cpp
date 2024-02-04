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
int n, ans = 0, count = 1; cin >> n;
vector<int> A(n); for(auto &a : A) cin >> a;

for(int i = 0 ; i < n ; i++){
    if(A[i]&1){
        //odd
        i++;
        while(i<n){
            if(A[i]&1){
                count++;i++;
                //cout << count << endl;
            }
            else{
                break;
            }
        }
        ans += count - 1;
        count = 1;
        i--;
    }
    else{
        i++;
        while(i<n){
            if(A[i]%2 == 0){
                count++;i++;
                //cout << count << endl;
            }
            else{
                break;
            }
        }
        ans += count - 1;
        count = 1;
        i--;
    }
}
    cout << ans << endl;

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
