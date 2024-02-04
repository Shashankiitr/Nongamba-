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
vector<int> v(n);
for(int i = 0 ; i < n ; i++){
    cin >> v[i];
}
sort(v.begin(), v.end());
if(n==2){
    cout << "Yes" << endl;
    return;
}
//all same
if(v[0]==v[n-1]){
    cout << "Yes" << endl;
    return;
}
if(n%2==0){
    if(v[0] == v[(n/2) - 1] && v[n/2] == v[n-1]){
        cout << "Yes" << endl;
        return;
    }
    else{
        cout << "No" << endl;
        return;
    }
}
else{
    if((v[0] == v[n/2] && v[(n/2) + 1] == v[n-1]) | (v[0] == v[(n/2) - 1] && v[(n/2)] == v[n-1])){
        cout << "Yes" << endl;
        return;
    }
    else{
        cout << "No" << endl;
        return;
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
