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
    int N; cin >> N; string S; cin >> S; int Arr[26] = {0}; N = 0;

    for(char c : S){
        Arr[c-'A']++;
    }

    for(int i = 0; i < 26; i++){
        if(Arr[i] >= 1 + i){
            N++;
        }
    }

    cout << N << endl;

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
