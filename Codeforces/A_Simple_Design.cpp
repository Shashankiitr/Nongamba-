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
bool isKBeautiful(int number, int k) {
    int digitSum = 0;
    // Calculate the digit sum of the number
    while (number > 0) {
        digitSum += number % 10;
        number /= 10;
    }
    
    // Check if the digit sum is divisible by k
    return digitSum % k == 0;
}

int findSmallestKBeautiful(int x, int k) {
    while (!isKBeautiful(x, k)) {
        x++;
    }
    return x;
}
void solve(){
int x, k; cin >> x >> k;
cout << findSmallestKBeautiful(x, k) << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);//fast io
    cin.tie(NULL);//fast io
    cout.tie(NULL);//fast io
    int t;  
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
