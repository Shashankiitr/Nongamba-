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
    int N; cin >> N; string S; cin >> S; vector<int> A(N/2); int count = 0;
    for(int i = 0 ; i < N ; i+=2){
        if(S[i]==S[i+1]){
            A[i/2] = S[i] - '0';
        }
        else{
            A[i/2] = 2;
            count++;
        }
    }
    if(count == N/2){
        cout << count << " " << 1 << endl;
        return;
    }
    if(count != 0){
        for(int i = 0 ; i < N/2 ; ++i){
            if(i!=0 && A[i]==2){
                A[i] = A[i - 1];
            }
        }
    }

    // cout << "A : ";

    // for(auto &a : A) cout << a << " ";
    // cout  << endl;

    int ans = 1;
    for(int i = 0 ; i < (N/2) - 1 ; ++i){
        if(A[i]==2){
            continue;
        }
        else{
            if(A[i]!=A[i + 1]){
                ans++;
            }
        }
    }
    cout << count << " " << ans << endl;
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
