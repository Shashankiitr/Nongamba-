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
    int N; cin >> N; vector<pair<int, int>> A(N), B(N), C(N);

    for(int i = 0; i < N; i++){
        cin >> A[i].first;
        A[i].second = i;
    }

    for(int i = 0; i < N; i++){
        cin >> B[i].first;
        B[i].second = i;
    }

    for(int i = 0; i < N; i++){
        cin >> C[i].first;
        C[i].second = i;
    }

    sort(A.begin(), A.end()); sort(B.begin(), B.end()); sort(C.begin(), C.end());

    int Ans = 0;
    for(int i = N - 1 ; i >= N - 3 ; i--){
        for(int j = N - 1 ; j >= N - 3 ; j--){
            for(int k = N - 1 ; k >= N - 3 ; k--){
                if(A[i].second != B[j].second && B[j].second != C[k].second && C[k].second != A[i].second){
                    Ans = max(Ans, A[i].first + B[j].first + C[k].first);
                }
            }
        }
    }
    cout << Ans << endl;
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
