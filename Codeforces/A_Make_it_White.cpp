#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; string S; cin >> S; int b = 0, l = 0;
for(char x : S){
    if(x == 'B') b++;
    else l++;
}
if(b == 0){
    cout << 0 << endl;
}
else if(b == 1){
    cout << 1 << endl;
}
else{
    int ind1, ind2;
    for(int i = 0; i < N; i++){
        if(S[i] == 'B'){
            ind1 = i;
            break;
        }
    }
    for(int i = N - 1 ; i >= 0 ; i--){
        if(S[i] == 'B'){
            ind2 = i;
            break;
        }
    }
    cout << ind2 - ind1 + 1 << endl;
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