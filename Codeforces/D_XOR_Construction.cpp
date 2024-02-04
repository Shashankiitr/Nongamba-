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
bool check(vector<int> &A, int temp){
    int len = A.size(); // N - 1
    vector<int> B(len + 1);
    B[0] = temp;
    for(int i = 1 ; i <= len ; i++){
        B[i] = B[i - 1]^A[i - 1];
        if(B[i] > len){
            return false;
        }
    }
    return true;
}
int main(){
int N; cin >> N; vector<int> A(N-1), B(N); for(auto &x : A) cin >> x;
int s = 0, e = N - 1; int temp, mid;
while(s < e){
    mid = (s + e)/2;
    if(check(A, mid)){
        temp = mid;
        s = mid + 1;
    }
    else{
        e = mid;
    }
}
B[0] = temp;
for(int i = 1 ; i < N ; i++){
    B[i] = B[i - 1]^A[i - 1];
}
//make A from B again
// for(int i = 0 ; i < N - 1 ; i++){
//     A[i] = B[i]^B[i + 1];
// }
//cout << "B - " << endl;
for(auto &b : B) cout << b << " ";

//cout << endl << "A - " << endl;
//for(auto &a : A) cout << a << " ";
return 0;
}