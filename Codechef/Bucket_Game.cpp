#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; vector<int> V(N);
int ones = 0, odds = 0; // odds are excluding 1
for(int i = 0; i < N; i++){
    cin >> V[i];
    if(V[i] == 1) ones++;
    else if(V[i] % 2 == 1) odds++;
}
int A, B;
A = (ones + 1)/2; B = ones/2;
if(ones&1){
    //bob first
    if(odds&1){
        B += (N - ones);  
    }
    else{
        A += (N - ones);
    }
}
else{
    //Alice first
    if(odds&1){
        A += (N - ones);
    }
    else{
        B += (N - ones);
    }
}
if(A > B){
    cout << "Alice" << endl;
}
else if(A < B){
    cout << "Bob" << endl;
}
else{
    cout << "Draw" << endl;
}
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