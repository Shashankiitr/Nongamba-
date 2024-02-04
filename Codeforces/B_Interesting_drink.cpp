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

int UpperBound(vector<long long> &A, long long K, long long low, long long high){
    //sort(A.begin(), A.end());
    long long mid;

    while(low <= high){
        mid = low + (high - low + 1)/2;

        if(A[mid] > K)
            high = mid-1;
        else 
            low = mid+1;
    }
    return low;
}

int main(){
long long n, q, ub; cin >> n; // ub : upperBound
vector<long long> P(n); for(auto &p : P) cin >> p; // P : prices
sort(P.begin(), P.end());
cin >> q;
for(long long i = 0 ; i < q ; i++){
    long long m; cin >> m;
    ub = UpperBound(P, m, 0, n - 1);
    if(ub > n){
        ub--;
    }
    cout << ub << endl;
}
return 0;
}