#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N, Q; cin >> N >> Q; string S; cin >> S;
char last = S[N - 1];
int len = 1;
for(int i = 0 ; i < N - 1 ; i++){
    if(S[i] == S[i + 1]){
        int smallLen = 1;
        while(i < N - 1 && S[i] == S[i + 1]){
            smallLen++;
            i++;
        }
        len = max(len, smallLen);
    }
}
int lastlen = 1;
for(int i = N - 1 ; i > 0 ; i--){
    if(S[i] == S[i - 1]){
        lastlen++;
    }
    else{
        break;
    }
}
cout << len << " ";
while(Q--){
    char C; cin >> C;
    if(C == last){
        lastlen++;
        len = max(len, lastlen);
    }
    else{
        last = C;
        lastlen = 1;
    }
    cout << len << " ";
}
cout << endl;
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