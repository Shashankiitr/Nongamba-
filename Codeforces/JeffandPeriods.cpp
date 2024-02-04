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
vector<pair<int, int>> A(N), B;
for(int i = 0 ; i < N ; i++){
    cin >> A[i].first;
    A[i].second = i;
}
sort(A.begin(), A.end());

for(int i = 0 ; i < N ; i++){
    if(A[i].first == A[i+1].first){
        int start = i, end = 0, d = A[i+1].second - A[i].second;
        while(A[i].first == A[i+1].first){
            i++;
        }
        end = i;
        bool flag = true;
        for(int j = start ; j < end ; j++){
            if(A[j+1].second - A[j].second != d){
                flag = false;
                break;
            }
        }
        if(flag){
            //cout << A[start].first << " " << d << endl;
            B.push_back(make_pair(A[start].first, d));
        }
    }
    else{
        //cout << A[i].first << " " << 0 << endl;
        B.push_back(make_pair(A[i].first, 0));
    }
}
cout << B.size() << endl;
for(auto &b : B){
    cout << b.first << " " << b.second << endl;
}
}
 
int main(){
    ios_base::sync_with_stdio(false);//fast io
    cin.tie(NULL);//fast io
    cout.tie(NULL);//fast io
        solve();
}
