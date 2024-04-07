#include <bits/stdc++.h>
#define int long long
using namespace std;

// int count1(string A){
//     int ans = 0;
//     for(auto &a : A){
//         if(a == '1') ans++;
//     }
//     return ans;
// }



int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int A[21][21];
    for(int i = 0 ; i < 21 ; ++i){
        for(int j = 0 ; j < 21 ; ++j){
            char x; cin >> x;
            if(x == '0') A[i][j] = 0;
            else A[i][j] = 1;
        }
    }

    for(int i = 0 ; i < 21 ; ++i){
        for(int j = 0 ; j < 21 ; ++j){
            cout << A[i][j];
        }
        cout << endl;
    } 

    //for(int)

    int sum = -1;
    for(int i = 1 ; i <= 18 ; ++i){
        for(int j = 1 ; j <= 18 ; ++j){
            int tp = 0;
            for(int dx = 0 ; dx < 4 ; ++dx){
                for(int dy = 0 ; dy < 4 ; ++dy){
                    tp += A[i + dx][j + dy];
                }
            }
            sum = max(sum, tp);
        }
    }
    cout << sum << endl;


    

    return 0;
}
