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
bool isupper(char c){
    return (c >= 'A' && c <= 'Z');
}
void solve(){
string s; cin >> s;
vector<pair<char, int>> U, L;
for(int i = 0 ; i < s.size() ; i++){
    if(isupper(s[i])){
    if(s[i] != 'B'){
        U.push_back({s[i], i});
    }
    else{
        if(U.size()>0){
            U.pop_back();
        }
    }
    }
    else{
        if(s[i] != 'b'){
            L.push_back({s[i], i});
        }
        else{
            if(L.size()>0){
                L.pop_back();
            }
        }
    }
}
//print the string in U and L vector according to their index
int i = 0, j = 0;
while(i < U.size() && j < L.size()){
    if(U[i].second < L[j].second){
        cout << U[i].first;
        i++;
    }
    else{
        cout << L[j].first;
        j++;
    }
}
while(i < U.size()){
    cout << U[i].first;
    i++;
}
while(j < L.size()){
    cout << L[j].first;
    j++;
}
cout << endl;
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
