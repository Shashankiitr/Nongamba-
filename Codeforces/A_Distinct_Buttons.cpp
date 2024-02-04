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
    int N, posX = 0, posY = 0, negX = 0, negY = 0; cin >> N;
    while(N--){
        int x, y; cin >> x >> y;
        if(x>0) posX=1;
        else if(x<0) negX=1;
        if(y>0) posY=1;
        else if(y<0) negY=1;
    }
    if(negX + posX + negY + posY < 4){
        cout << "YES" << endl;
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
