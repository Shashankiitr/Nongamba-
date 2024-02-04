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
int N; cin >> N;
if(N == 1 | N == 2 | N == 3 | N ==4 | N ==5 | N == 6){
    cout << "NO" << endl;
}
else if((N - 3)%3 && N - 3 > 2){
    cout << "YES" << endl;
    cout << 1 << " " << 2 << " " << N - 3 << endl;
}
else if(N%3 == 0 && N - 5 != 4 && N - 5 != 1){
    cout << "YES" << endl;
    cout << 1 << " " << 4 << " " << N - 5 << endl;
}
else{
    cout << "NO" << endl;
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
