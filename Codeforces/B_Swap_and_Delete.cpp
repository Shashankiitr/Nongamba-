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
    string S; cin >> S; int count_0 = 0, count_1 = 0;
    bool flag_0 = false, flag_1 = false;
    for(char s : S){
        if(s == '1') count_1++;
        else count_0++;
    }

    if(count_1 == count_0){
        cout << 0 << endl;
        return;
    }

    for(char s : S){
        if(s == '1'){
            count_0--;
        }
        if(s == '0'){
            count_1--;
        }
        if(count_1 < 0){
            flag_1 = true;
            break;
        }
        if(count_0 < 0){
            flag_0 = true;
            break;
        }
    }

    if(flag_0){
        cout << count_1 << endl;
        return;
    }

    if(flag_1){
        cout << count_0 << endl;
        return;
    }

    cout << 0 << endl;


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
