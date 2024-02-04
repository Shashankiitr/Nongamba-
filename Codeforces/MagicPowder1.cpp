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
using namespace std;

void solve(){

int N, K;
cin >> N >> K;

vector<int> A(N), B(N);

for(auto &a : A)
    cin >> a;

for(auto &b : B)
    cin >> b;

int ans = 0;

vector<pair<int , int>> CnN(N);
 for(int i = 0 ; i < N ; i++){
    int confirmed = B[i]/A[i];
    int needed = A[i] - (B[i]%A[i]);
    CnN[i] = {confirmed, needed};
 }

sort(CnN.begin(), CnN.end());
ans = CnN[0].first;

while(K!=0){
    for(int i = 0 ; i < N ; i++){
        if(CnN[i].second <= K && CnN[i].first + 1 > ans){
            K -= CnN[i].second;
            CnN[i].second = A[i];
            ans++;
            CnN[i].first++;
        }
        if(K == 0) break; 
    }
    sort(CnN.begin(), CnN.end());
}
cout << ans << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);//fast io
    cin.tie(NULL);//fast io
    cout.tie(NULL);//fast io
    solve();
    return 0;
}
