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
    string S; cin >> S; int N = S.size();
    if(S[1] != '0'){
        string A = S.substr(0, 1);
        string B = S.substr(1, N-1);
        int a = stoi(A); int b = stoi(B);
        if(a < b){
            cout << A << " " << B << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    else{
        int i;
        for(i = 1 ; i < N ; i++){
            if(S[i]=='0'){
                continue;
            }
            else{
                break;
            }
        }
        if(i==N){
            cout << -1 << endl;
        }
        else{
            string A = S.substr(0, i), B = S.substr(i, N - i);
            int a = stoi(A); int b = stoi(B);
            if(a < b){
                cout << a << " " << b << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
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
