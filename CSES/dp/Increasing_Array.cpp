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
  int N; cin >> N; long long ans = 0; int X; cin >> X;
  for(int i = 1 ; i < N ; i++){
    int Y; cin >> Y;
    if(X - Y > 0){
        ans +=(X - Y);
    }
    else{
        X = Y;
    }
  }
  cout << ans << endl;
return 0;
}