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
string S; cin >> S;
int freq[27] = {0};
for(int i = 0 ; i < S.size() ; i++){
    int x = S[i] - 'a' + 1;
    freq[x]++;
}
int oddCount = 0;
for(int i = 1 ; i < 27 ; i++){
    if(freq[i] & 1)
        oddCount++;
}
if(oddCount){
    oddCount--;
    if(oddCount&1)
        cout << "Second" << endl;
    else   
        cout << "First" << endl;
}
else{
    cout << "First" << endl;
}   
}
 
int main(){
    ios_base::sync_with_stdio(false);//fast io
    cin.tie(NULL);//fast io
    cout.tie(NULL);//fast io
    //int t;  
    //cin >> t;
    //while(t--){
        solve();
    //}
    return 0;
}
