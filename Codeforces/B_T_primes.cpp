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
int n; cin >> n;
vector<long long> A(n); for(auto &a : A) cin >> a;
int N = 10e6;
vector<bool> isPrime(N + 1, true);
    isPrime[0] = false; isPrime[1] = false;

    for(int i = 2; i*i <= N ; i++){
        if(isPrime[i] == true){
            for(int j = i*i ; j <= N ; j+=i){
                isPrime[j] = false;
            }
        }
    }
for(int i = 0 ; i< n ; i++){
    if(((long long)sqrt(A[i])*(long long)sqrt(A[i]) == A[i]) && (isPrime[sqrt(A[i])] == true)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
return 0;
}