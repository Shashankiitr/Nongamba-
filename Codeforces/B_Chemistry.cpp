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
int n, k; cin >> n >> k;
string s; cin >> s;
vector<int> V(26);
for(auto &x : s) V[x - 'a']++;
sort(V.begin(), V.end());
if((n-k)&1){
    int maxOdd = 0; int maxOddIndex = -1;
    for(int i = 0 ; i < 26 ; i++){
        if(V[i] % 2 == 1){
            if(V[i] > maxOdd){
                maxOdd = V[i];
                maxOddIndex = i;
            }
        }
    }
    V[maxOddIndex] = 0;
    int d1 = n-k - maxOdd;
    if(d1 <= 0){
        cout << "YES" << endl;
    }
    else{
        long long evenSum = 0;
    for(int i = 0 ; i < 26 ; i++){
        if(V[i] % 2 == 0){
            evenSum += V[i];
        }
    }
    if(evenSum >= d1){
        cout << "YES" << endl;
    }
    else{
        bool flag = false;
        int d = d1 - evenSum;
        for(int i = 0 ; i < 26 ; i++){
            if(V[i] % 2 == 1){
                if(V[i] >= d){
                    flag = true;    
                    break;
                }
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    }
}
else{
    //bool flag = false;
    long long evenSum = 0;
    for(int i = 0 ; i < 26 ; i++){
        if(V[i] % 2 == 0){
            evenSum += V[i];
        }
    }
    if(evenSum >= n-k){
        cout << "YES" << endl;
    }
    else{
        bool flag = false;
        int d = n-k - evenSum;
        for(int i = 0 ; i < 26 ; i++){
            if(V[i] % 2 == 1){
                if(V[i] >= d){
                    flag = true;
                    break;
                }
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
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


