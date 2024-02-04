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

long long nCr(long long N, long long R){
    long long a = 1, b = 1;

    if(N - R < R) R = N - R;

    if(R != 0){
        while(R){
            a *= N;
            b *= R;

            long long m = gcd(a, b);

            a /= m;
            b /= m;

            N--;
            R--;
        }
    }
    else{
        return 1;
    }
    return a;
}

void solve(){
int N; cin >> N;
vector<long long> B(N);
for(auto &b : B) cin >> b;

sort(B.begin(), B.end());

cout << B[N-1] -  B[0]  << " ";

if(B[N-1] -  B[0] == 0){
    cout << nCr(N, 2) << endl;
    return;
}
long long minCount = 1, maxCount = 1, i = 1;
while(i<N){
    if(B[i] == B[0])
        minCount++;
    else    
        break;
    i++;
}
i = N - 2;
while(i>=0){
    if(B[i] == B[N-1])
        maxCount++;
    else    
        break;
    i--;
}
cout << maxCount * minCount << endl;
//cout << static_cast<long long>(maxCount) * static_cast<long long>(maxCount) << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);//fast io
    cin.tie(NULL);//fast io
    cout.tie(NULL);//fast io
    
        solve();
    
    return 0;
}
