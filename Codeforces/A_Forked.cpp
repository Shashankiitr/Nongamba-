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
    int A, B, X1, Y1, X2, Y2; cin >> A >> B >> X1 >> Y1 >> X2 >> Y2;
    map<pair<int, int>, int> m; //pair for x, y and int for count
    if(A==B){
        m[{X1+A, Y1+B}]++;
        m[{X1+A, Y1-B}]++;
        m[{X1-A, Y1+B}]++;
        m[{X1-A, Y1-B}]++;
        
        m[{X2+A, Y2+B}]++;
        m[{X2+A, Y2-B}]++;
        m[{X2-A, Y2+B}]++;
        m[{X2-A, Y2-B}]++;

    }
    else{
        m[{X1+A, Y1+B}]++;
        m[{X1+A, Y1-B}]++;
        m[{X1-A, Y1+B}]++;
        m[{X1-A, Y1-B}]++;

        m[{X1+B, Y1+A}]++;
        m[{X1+B, Y1-A}]++;
        m[{X1-B, Y1+A}]++;
        m[{X1-B, Y1-A}]++;
        
        m[{X2+A, Y2+B}]++;
        m[{X2+A, Y2-B}]++;
        m[{X2-A, Y2+B}]++;
        m[{X2-A, Y2-B}]++;

        m[{X2+B, Y2+A}]++;
        m[{X2+B, Y2-A}]++;
        m[{X2-B, Y2+A}]++;
        m[{X2-B, Y2-A}]++;
    }
    
    int ans = 0;
    for(auto i: m){
        if(i.second == 2) ans++;
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
