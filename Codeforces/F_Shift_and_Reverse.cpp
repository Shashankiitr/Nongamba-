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
int N; cin >> N; vector<int> A(N), B; for(auto &a : A) cin >> a; int dec = 1;
if(is_sorted(A.begin(), A.end())){
    cout << 0 << endl; return;
}
B = A; reverse(B.begin(), B.end());
if(is_sorted(B.begin(), B.end())){
    cout << 1 << endl; return;
}
for(int i = 0 ; i < N-1 ; i++){
    if(A[i] >= A[i + 1]){
        dec++;
    }
    else{
        break;
    }
}
cout << dec << endl;
//now check the array after index dec - 1 is decreasing or not
bool flag = true;
for(int i = dec ; i < N - 1 ; i++){
    if(A[i + 1] > A[i]){
        flag = false;
        break;
    }
}
if(flag == false){
    cout << -1 << endl;
    return;
}
else{
    
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
