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
//#define int long long
using namespace std;

void solve(){
    char A[8][8]; for(int i = 0 ; i < 8 ; i++) for(int j = 0 ; j < 8 ; j++) cin >> A[i][j];
    for(int i = 0 ; i < 8 ; i++){
        for(int j = 0 ; j < 8 ; j++){
            if(A[i][j] != '.'){
                for(int k = j ; k < 8 ; k++){
                    if(A[i][k] != '.'){
                        cout << A[i][k];
                    }
                }
            }
        }
    }
    cout << endl;
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

