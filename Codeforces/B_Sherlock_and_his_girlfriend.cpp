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
int n; cin >> n;

vector<int> isPrime(n + 2, 1);
//for(auto &a : isPrime) cout << a << " ";
//int k = 0; // number of primes
for(int i = 2 ; i*i <= n + 1 ; i++){
    if(isPrime[i]==1){
        for(int j = i*i ; j < n + 2 ; j+=i){
            if(j%i==0){
                isPrime[j] = 0;
            }
        }
    }
}
if(n==1){
    cout << 1 << endl;
    cout << 1 << endl;
    return;
}
if(n==2){
    cout << 1 << endl;
    cout << 1 << " " << 1 << endl;
    return;
}
cout << 2 << endl;
vector<int> ans(n + 2, 0);
for(int i = 2 ; i <= n + 1 ; i++){
    if(isPrime[i]==1){
        cout << 1 << " ";
    }
    else{
        cout << 2 << " ";
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
    // }
    return 0;
}
