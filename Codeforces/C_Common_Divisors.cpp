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

long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
long long N, X, ans = 0; cin >> N; vector<long long> A(N); cin >> A[0]; X = A[0];
for(int i = 1 ; i < N ; i++){
    cin >> A[i]; X = gcd(X, A[i]);
}
for(long long i = 1 ; i*i <= X ; i++){
    if(X % i == 0){
        ans++;
        if(i != X/i) ans++;
    }
}
cout << ans << endl;
return 0;
}