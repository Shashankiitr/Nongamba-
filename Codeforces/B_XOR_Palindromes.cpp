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
string A; cin >> A;
string B = "";

int count = 0;
for(int i = 0, j = N -1 ; i <= j ; i++, j--){
    if(A[i] != A[j]) count++;
}

if(N&1){
    for(int i = 0 ; i < (N + 1)/2 ; i++){
        B+="0";
    }
    for(int i = count ; i < (N + 1)/2 ; i++){
        B[i] = '1';
    }
    string C = B;
    reverse(C.begin(), C.end());
    B+=C;
}
else{
    
    for(int i = 0 ; i < N/2 ; i++){
        B+="0";
    }
    
    for(int i = count ; i < N/2 ; i++){
        if((i&1) == (count&1)) B[i] = '1';
    }

    string C = B;
    if(((N/2)&1) == (count&1)) B += '1';
    else B += '0';
    reverse(C.begin(), C.end());
    B+=C;
}
cout << B << endl;
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
