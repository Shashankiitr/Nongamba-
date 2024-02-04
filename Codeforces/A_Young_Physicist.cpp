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

int main(){
int n; cin >> n;
int X = 0, Y = 0, Z = 0;
for(int i = 1 ; i <= n ; i++){
    int x, y, z;
    cin >> x >> y >> z;
    X+=x; Y+=y; Z+=z;
}
if(X==0 && Y==0 && Z==0){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
}
return 0;
}