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
    int N; cin >> N;vector<int> A(30);
    while(N--){
        int T, V; cin >> T >> V;
        if(T==1){
            A[V]++;
        }
        else{
            for(int i = 0 ; i < 30 ; i++){
                V -= min((V>>i), A[i])<<i;
            }
            if(V==0) cout << "YES" << endl; 
            else cout << "NO" << endl;
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);//fast io
    cin.tie(NULL);//fast io
    cout.tie(NULL);//fast io
    int t = 1;  
    
    while(t--){
        solve();
    }
    return 0;
}
