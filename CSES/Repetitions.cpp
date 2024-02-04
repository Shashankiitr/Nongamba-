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
    string S; cin >> S; int N = S.length(), len = 1;
    for(int i = 0 ; i < N - 1 ; i++){
        if(S[i] == S[i + 1]){
            int X = 1;
            while(S[i]==S[i + 1]){
                X++;i++;
            }   
            len = max(len, X);
        }
    }
    cout << len << endl;
return 0;
}