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
    int N; cin >> N; string S; cin >> S; vector<int> A(26, 0); for(char c : S) A[c - 'a']++;
    int M = *max_element(A.begin(), A.end()); 
    if(M <= N/2) cout << N%2 << endl; else cout << M -(N - M) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);//fast io
    cin.tie(NULL);//fast io
    cout.tie(NULL);//fast io
    long long t;  
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}


//time complexity: O(N)
//space complexity: O(1)