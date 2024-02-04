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
int count25 = 0, count50 = 0;
while(N--){
    int X; cin >> X;
    if(X == 25){
        count25++;
    }
    else if(X == 50){
        if(count25 > 0){
            count25--;
            count50++;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    else{
        if(count50 > 0 && count25 > 0){
            count50--;
            count25--;
        }
        else if(count25 > 2){
            count25 -= 3;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
}
cout << "YES" << endl;  
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
    // return 0;
}
