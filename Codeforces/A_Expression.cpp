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
int a, b, c; cin >> a >> b >> c;
cout << max(a*(b + c), max(a*b*c, max(a+b+c, (a+b)*c))) << endl;
return 0;
}