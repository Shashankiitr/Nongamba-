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

int main(){
    // Method - 1

    // int N; cin >> N; vector<int> A(N); for(auto &a : A) cin >> a; sort(A.begin(), A.end());
    // if(A[0]==2){
    //     cout << 1 << endl;
    // }
    // else if(A[N - 1] == N - 1){
    //     cout << N << endl;
    // }
    // else{
    //     for(int i = 0 ; i < N - 1 ; i++){
    //         if(A[i + 1] - A[i] != 1){
    //             cout << A[i] + 1 << endl;
    //         }
    //     }
    // }

    //Method - 2

    int N; cin >> N; long long ans = 0;
    for(int i = 1 ; i < N ; i++){
        int X; cin >> X; ans += (i-X);
    }
    ans += N;
    cout << ans << endl;
return 0;
}

