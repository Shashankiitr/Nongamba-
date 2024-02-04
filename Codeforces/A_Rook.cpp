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
string s; cin >> s; char C = s[0]; int A = s[1] - '0';
int X[8] = {1, 2, 3, 4, 5, 6, 7, 8}; char Y[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
for(int i = 0 ; i < 8 ; i++){
    if(X[i]!=A){
        cout << C << X[i] << endl;
    }
}
for(int i = 0 ; i < 8 ; i++){
    if(Y[i]!=C){
        cout << Y[i] << A << endl;
    }
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
