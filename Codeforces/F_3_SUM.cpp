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
int N; cin >> N;
vector<int> A(N); vector<int> B(10);
for(auto &a : A){
    cin >> a;
    B[a%10]++;
}
A.clear();
int count = 0;
for(int i = 0 ; i < 10 ; i++){
    for(int j = 0 ; j < B[i] && count < 3; j++){
        A.push_back(i);
        count++;
    }
    count = 0;
}

int n = A.size();
for(int i = 0 ; i < n ; i++){
    for(int j = i + 1 ; j < n ; j++){
        for(int k = j + 1 ; k < n ; k++){
            if((A[i] + A[j] + A[k]) % 10 == 3){
                cout << "Yes" << endl;
                return;
            }
        }
    }
}
cout << "No" << endl;
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
