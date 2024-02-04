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
vector<int> a(n); for(int i = 0 ; i < n ; i++){cin >> a[i];}
vector<int> v = {1, 2, 4, 8, 16};
for(int i = n - 1 ; i > 0 ; i--){
    if(a[i] < a[i-1]){
        if(find(v.begin(), v.end(), i) == v.end()){
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
    int t;  
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
