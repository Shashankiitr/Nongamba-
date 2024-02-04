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
bool isGood(string s){
    if(s.length() == 1){
        return true;
    }
    //s is a binary string check if its alternating
    int len = s.length();
    for(int i = 1 ; i < len ; i++){
        if(s[i] == s[i-1]){
            return false;
        }
    }
    return true;
}
void solve(){
int n, m; cin >> n >> m;
string s, t; cin >> s >> t;
if(isGood(s)){
    cout << "YES" << endl;
    return;
}
else{
    if(!isGood(t)){
        cout << "NO" << endl;
    }
    else{
        if(t[0] == t[m-1] && t[0] == '0'){
            //check if s has consecutive 0s
            bool flag = false;
            for(int i = 1 ; i < n ; i++){
                if(s[i] == s[i-1] && s[i] == '0'){
                    flag = true;
                    break;
                }
            }
            if(flag){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
        else if(t[0] == t[m-1] && t[0] == '1'){
            //check if s has consecutive 1s
            bool flag = false;
            for(int i = 1 ; i < n ; i++){
                if(s[i] == s[i-1] && s[i] == '1'){
                    flag = true;
                    break;
                }
            }
            if(flag){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
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
