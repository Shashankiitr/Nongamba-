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
int a, b, c; cin >> a >> b >> c;
bool flag = false;
for(int y = 0 ; c - b*y >= 0 ; y++){
    if((c - b*y)%a == 0){
        //x exist integer
        flag = true;
        break;
    }
}
if(flag){
    cout << "Yes" << endl;
}
else{
    cout << "No" << endl;
}
}
 
int main(){
    ios_base::sync_with_stdio(false);//fast io
    cin.tie(NULL);//fast io
    cout.tie(NULL);//fast io
    // int t;  
    // cin >> t;
    // while(t--){
    solve();
    // }
    return 0;
}
