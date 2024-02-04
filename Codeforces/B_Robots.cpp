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
int N, M; cin >> N >> M; char A[N][M]; bool flag = true; int col = -1;
for(int i = 0 ; i < N ; i++){
    for(int j = 0 ; j < M ; j++){
        cin >> A[i][j];
        if(A[i][j] == 'R' && flag){
            col = j; flag = false;
        }
    }
}
//cout << col  << " ";
if(col == -1){
    cout << "NO" << endl;
}
else if(col == 0){
    cout << "YES" << endl;
}
else{
    flag = true;
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < col ; j++){
            if(A[i][j] == 'R'){
                flag = false;
                break;
            }
        }
    }
    cout << (flag ? "YES" : "NO") << endl;
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
