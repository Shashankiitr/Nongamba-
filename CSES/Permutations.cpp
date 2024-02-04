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
    int N; cin >> N;
    if(N==1){
        cout << 1 << endl;
    }
    else if(N < 4){
        cout << "NO SOLUTION" << endl;
    }
    else{
        int x = 2;
        while(x <= N){
            cout << x << " ";
            x+=2;
        }
        x = 1;
        while(x <= N){
            cout << x << " ";
            x+=2;
        }
    }
return 0;
}