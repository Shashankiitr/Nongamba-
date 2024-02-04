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
    int N, K; cin >> N >> K;

    if(K == 0){
        for(int i = N ; i >= 1 ; i--){
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    
    for(int i = N - K ; i <= N ; i++){
        cout << i << " ";
    }

    for(int i = N - K - 1 ; i >= 1 ; i--){
        cout << i << " ";
    }

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
