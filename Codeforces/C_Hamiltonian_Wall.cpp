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

bool check(int i, int j, int M, vector<vector<char>> &A){
    while(j < M - 1){
        //cout << i << " " << j << endl;
        if(i == 0){
            if(A[1][j] == 'B'){
                i++; A[0][j] = 'W';
            }
            else if(A[0][j + 1] == 'B'){
                j++; A[0][j] = 'W';
            }
            else{
                return false;
            }
        }
        else{
            // i = 1
            if(A[0][j] == 'B'){
                i--; A[1][j] = 'W';
            }
            else if(A[1][j + 1] == 'B'){
                j++; A[1][j] = 'W';
            }
            else{
                return false;
            }
        }
    }
    return true;
}

void solve(){
int M; cin >> M; string s1, s2; cin >> s1 >> s2;
vector<vector<char>> A(2, vector<char>(M)), temp(2, vector<char>(M));
for(int i = 0; i < M; i++){
    A[0][i] = s1[i];
    A[1][i] = s2[i];
}
temp = A;

if (M == 1) {
    if (A[0][0] == A[1][0] && A[0][0] == 'W') {
        cout << "NO" << endl;
        return;
    }
    else {
        cout << "YES" << endl;
        return;
    }
}
else {
    if (A[0][0] == 'B') {
        if (check(0, 0, M, temp)) {
            cout << "YES" << endl;
            return;
        }
    }
    if (A[1][0] == 'B') {
        if (check(1, 0, M, A)) {
            cout << "YES" << endl;
            return;
        }
    }
}
cout << "NO" << endl;
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
