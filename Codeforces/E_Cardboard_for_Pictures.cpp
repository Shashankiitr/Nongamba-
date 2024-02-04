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
#define int long long
using namespace std;

void solve(){
    int N, C, S1 = 0, S2 = 0; cin >> N >> C; vector<int> A(N);
    for(auto &a : A){
        cin >> a; S1 += a*a; S2 += a;
    }
    int W = (int)sqrt(((S2*S2)/(4*N*N)) - ((S1 - C)/(4*N))) - (S2/(2*N));
    cout << W << endl;
}
 
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;  
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){

}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
