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
int n, k, minInd = 0; cin >> n >> k;
vector<int> H(n); for(auto &h : H) cin >> h;
long long minSum = 0, sum = 0;

//minSum
for(int i = 0 ; i < k ; i++){
    sum+=H[i]; minSum+=H[i];
}

//cout << "minSum : " << minSum << endl;

for(int i = 1 ; i <= n-k ; i++){
    sum -= H[i - 1]; sum += (H[i + k - 1]);
    //cout << sum << endl;
    if(sum < minSum){
        minSum = sum;
        minInd = i;
    //cout << sum << endl;

    }
}

cout << minInd + 1 << endl;
return 0;
}