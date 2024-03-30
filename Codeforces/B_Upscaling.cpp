#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; 
char A[N][N];
for(int i = 0 ; i < N ; i++){
    if(i&1){
        for(int j = 0 ; j < N ; j++){
            if(j&1) A[i][j] = 'B';
            else A[i][j] = 'W';
        }
    }
    else{
        for(int j = 0 ; j < N ; j++){
            if(j&1) A[i][j] = 'W';
            else A[i][j] = 'B';
        }
    }
}

for(int i = 0 ; i < N ; i++){
    for(int j = 0 ; j < N ; j++){
        if(A[i][j] == 'B') cout << "##";
        else cout << "..";
    }
    cout << endl;
    for(int j = 0 ; j < N ; j++){
        if(A[i][j] == 'B') cout << "##";
        else cout << "..";
    }
    cout << endl;
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