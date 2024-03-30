#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N; cin >> N; 
char A[2][N];
for(int i = 0 ; i < 2 ; i++){
    for(int j = 0 ; j < N ; j++){
        cin >> A[i][j];
    }
}

if(A[1][N - 2] == '<'){
    cout << "NO" << endl;
    return;
}

int i = 0, j = 0;
while(j < N - 1){
    if(i == 0){
        if(j == N - 2){
            cout << "YES" << endl; return;
        }
        if(j < N - 1){
            if(A[i + 1][j] == '<' && A[i][j + 1] == '<'){
                cout << "NO" << endl; return;
            }
            else if(A[i + 1][j] == '<' && A[i][j + 1] == '>'){
                j+=2;
            }
            else if(A[i + 1][j] == '>' && A[i][j + 1] == '<'){
                i = 1; j++;
            }
            else{
                j+=2;
            }
        }
    }
    else{
        if(j == N - 2){
            cout << "YES" << endl; return;
        }
        if(j < N - 1){
            if(A[i - 1][j] == '<' && A[i][j + 1] == '<'){
                cout << "NO" << endl; return;
            }
            else if(A[i - 1][j] == '>' && A[i][j + 1] == '<'){
                j++; i = 0;
            }
            else if(A[i - 1][j] == '<' && A[i][j + 1] == '>'){
                j+=2;
            }
            else{
                i = 0; j++;
            }
        }
    }
}
cout << "YES" << endl;
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