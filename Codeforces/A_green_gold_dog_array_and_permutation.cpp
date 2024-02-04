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
vector<pair<int, int>> A;
for(int i = 0 ; i < N ; i++){
    int x; cin >> x;
    A.push_back(make_pair(x, i));
}
sort(A.begin(), A.end());
for(int i = 0 ; i < N ; i++){
    A[i].first = N - i;
}
sort(A.begin(), A.end(), [](const pair<int, int>& a, const pair<int, int>& b) { return a.second < b.second;});
for(auto a : A){
    cout << a.first << " ";
}
cout << endl;


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
