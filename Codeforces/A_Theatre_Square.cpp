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
    long long n, m, a, x, y; cin >> n >> m >> a;
    x = n/a; y = m/a;
    if(n%a){
        x++;
    }
    if(m%a){
        y++;
    }
    cout << x*y << endl;
    return 0;
}