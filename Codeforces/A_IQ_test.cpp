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
int N, oddCount = 0, evenCount = 0, oddIndx = 0, evenIndx = 0; cin >> N; vector<int> A(N);

for(int i = 0 ; i < N ; i++){
    cin >> A[i];
    if(A[i]&1){
        oddCount++;
        if(!oddIndx){
            oddIndx = i + 1;
        }
    }
    else{
        evenCount++;
        if(!evenIndx){
            evenIndx = i + 1;
        }
    }
}

if(oddCount == 1){
    cout << oddIndx << endl;
}
else{
    cout << evenIndx << endl;
}

return 0;
}