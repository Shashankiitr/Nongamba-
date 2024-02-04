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

#define repi(i, sv, n) for(int i=sv ; i<(n); ++i)
#define repl(i, sv, n) for(ll i=0 ; i<(n); ++i)
#define ll long long

const int N = 1e7;
bool sieve[N+1];
void createSieve(){
    repi(i, 2, N+1) sieve[i] = true;
    for(int i=2; i*i<N ; i++){
        if(sieve[i]==true){
            for(int j=i*i ; j<=N ; j+=i){
                sieve[j]=false;
            }
        }
    }
} 

void solve(){
long long N; cin >> N;
vector<long long> A(N); for(auto &i : A) cin >> i;
for(int i = 0 ; i < N ; i++){
    if(sieve[A[i]]){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
}
 
int main(){
    ios_base::sync_with_stdio(false);//fast io
    cin.tie(NULL);//fast io
    cout.tie(NULL);//fast io
    // int t;  
    // cin >> t;
    // while(t--){
        solve();
    //}
    //return 0;
}
