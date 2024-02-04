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
int n, k; cin >> n >> k;
vector<int> V(n);
for(auto &x : V) cin >> x;
vector<int> A(V);
//repalce all elements with k - V[i]%k
for(int i = 0 ; i < n ; i++){
    if(V[i] % k != 0){
        V[i] = k - V[i]%k;
    }
    else{
        V[i] = 0;
    }
}

int minm = *min_element(V.begin(), V.end());
if(k==4){
    if(n==1){
        if(V[0] == 2){
            cout << 2 << endl;
        }

    }
    if(minm == 0){
        cout << 0 << endl;
        return;
    }
    int count2 = 0;
    for(int i = 0 ; i < n ; i++){
        if(V[i] == 2){
            count2++;
        }
    }
    if(count2 == 0){
        cout << minm << endl;
        return;
    }
    else if(count2 >= 2){
        cout << 0 << endl;
        return;
    }
    else {
        cout << 1 << endl;
        return;
    }
 
}
else{
    cout << minm << endl;
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
