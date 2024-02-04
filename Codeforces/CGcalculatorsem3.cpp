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
float prev, qp, dec, tsp, min, ead, ele;
cout << "Prev CG : "; cin >> prev;
cout << "qp : "; cin >> qp;
cout << "dec : "; cin >> dec;
cout << "tsp : "; cin >> tsp;
cout << "min : "; cin >> min;
cout << "ead : "; cin >> ead;
cout << "ele : "; cin >> ele;

float ans = ((float)45*prev + 3*(qp + ead + ele) + 4*(tsp + dec + min))/(float)(66);
cout << "final CG : ";
cout << ans << endl;
return 0;
}