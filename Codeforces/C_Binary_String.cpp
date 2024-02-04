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

getIndex(string S, int s, int e, char c){
    int mid;
    while(s <= e){
        mid = s + (e - s + 1)/2;
        if(S[mid] == c){
            return mid;
        }
        else if(S[mid] > c){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}


void solve(){
string S; cin >> S; int count1 = 0, count0 = 0, removal1 = 0;

for(int i = 0 ; i < S.size() ; i++){
    if(S[i] == '0') count0++;
    else count1++;
}

if(count1 == 0 | count0 == 0){
    cout << 0 << endl;
    return;
}
int s = 0, e = S.length() - 1;
while(removal1 < count0){
    if(S[s] == '0'){
        count0--;
        s++;
    }
    else if(S[e] == '0'){
        count0--;
        e--;
    }
    else{
        // apply binary search to find the index of 0 
        int index = getIndex(S, s, e, '0');
        if(index - s > e - index){
            removal1++;
            e--;
        }
        else{
            removal1++;
            s++;
        }
    }
}
cout << count0 << endl;
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
