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
int T, Ex, Ey, Sx, Sy, time = -1;
cin >> T >> Sx >> Sy >> Ex >> Ey;
string S; cin >> S;
for(int i = 0 ; i < T ; i++){
    char dirxn = S[i];
    if(dirxn == 'N' && Ey > Sy){
        Sy++;
    }
    else if(dirxn == 'S' && Ey < Sy){
        Sy--;
    }
    else if(dirxn == 'E' && Ex > Sx){
        Sx++;
    }
    else if(dirxn == 'W' && Ex < Sx){
        Sx--;
    }
    if(Sx == Ex && Sy == Ey){
        time = i + 1;
        break;
    }
}
    cout << time << endl;

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
