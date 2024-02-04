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
int n; cin >> n;
vector<int> A(n); 
int twoCount = 0;
for(int i = 0 ; i < n ; i++){
    cin >> A[i];
    if(A[i]==2){
        twoCount++;
    }
}
if(twoCount&1){
    cout << -1 << endl;
    return;
}
else if(twoCount==0){
cout << 1 << endl;
return;
}
else if(n==2 && A[0]==2 && A[1]==2){
    cout << 1 << endl;
    return;
}
else if(twoCount==2 && A[0]==2){
    cout << 1 << endl;
    return;
}
else{
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(A[i] == 2){
            count++;
        }
        if(count == twoCount/2){
            cout << i+1 << endl;
            break;
        }
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
