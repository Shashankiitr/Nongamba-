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
    long long N; cin >> N;
    while(true){
        cout << N << " ";
        if(N==1){
            break;
        }
        if(N&1){
            N*=3; N++;
        }
        else{
            N/=2;
        }
    }
return 0;
}