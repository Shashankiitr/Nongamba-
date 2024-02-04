#include <bits/stdc++.h>
using namespace std;

int steps(int n, vector<int> &dp){
    if(n==0 || n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=steps(n-1, dp) + steps(n-2, dp);
}

int main(){
    int n;
    cin >>n;
    vector<int> dp(n+1, -1);
    cout << steps(n, dp) << endl;
}

//time complexity : O(n)
//space complexity : O(n) + O(n) (for array)