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
int Px, Py, Ax, Ay, Bx, By; cin >> Px >> Py >> Ax >> Ay >> Bx >> By;
double OP, PA, PB, AB, OA, OB;

OP = sqrt((Px)*(Px) + (Py)*(Py));
PA = sqrt((Px - Ax)*(Px - Ax) + (Py - Ay)*(Py - Ay));
PB = sqrt((Px - Bx)*(Px - Bx) + (Py - By)*(Py - By));
AB = sqrt((Bx - Ax)*(Bx - Ax) + (By - Ay)*(By - Ay));
OA = sqrt((Ax)*(Ax) + (Ay)*(Ay));
OB = sqrt((Bx)*(Bx) + (By)*(By));

double W = min(AB/2, min(max(OA, PA), max(OB, PB)));

if(W <= AB/2){
    cout << W << endl;
}
else{
    cout << AB/2 << endl;
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
