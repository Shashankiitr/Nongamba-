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

const int mod = 998244353;
const int MAX = 2000006;

long long powModm(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % mod;
        }
        a = (a * a) %  mod;
        b >>= 1;
    }
    return res % mod;
}

long long fact[MAX], invfact[MAX];
void compute(){
    fact[0] = 1;
    for(int i = 1 ; i < MAX ; i++){
        fact[i] = (fact[i-1]*i)%mod;
    }
    invfact[MAX-1] = powModm(fact[MAX-1], mod-2);
    for(int i = MAX-2 ; i >= 0 ; i--){
        invfact[i] = (invfact[i+1]*(i+1))%mod;
    }
}

long long calculateNcRModM(long long n, long long r) {
    if(r > n){
        return 0;
    }
    long long ans = (fact[n]*invfact[r])%mod;
    ans = (ans*invfact[n-r])%mod;
    return ans;
}

int main(){
compute();
long long N, M; cin >> N >> M;
if(N==2){
    cout << 0 << endl;
    return 0;
}
long long ans = ((((N - 2)* calculateNcRModM(M, N - 1)) % mod)*powModm(2, N-3))%mod;
cout << ans << endl;
return 0;
}