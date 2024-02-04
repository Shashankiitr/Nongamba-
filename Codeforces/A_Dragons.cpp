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
int s, n; cin >> s >> n;
vector<pair<int, int>> V(n);
for(int i = 0 ; i < n ; i++){
    int x, y; cin >> x >> y;
    V[i] = (make_pair(x, y));
}
sort(V.begin(), V.end());

bool flag = true;
for(int i = 0 ; i < n ; i++){
    if(V[i].first >= s){
        flag = false;
        break;
    }
    else{
        s+=V[i].second;
    }
}
string result = (flag) ? "YES" : "NO";
cout << result << endl;

return 0;
}