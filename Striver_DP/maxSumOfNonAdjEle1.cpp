#include <bits/stdc++.h>
using namespace std;

int f(int n, vector<int> &input, vector<int> &dp){
    if(n==0) return input[0];
    if(n<0) return 0;
    if(dp[n]!=-1) return dp[n];
    int pick = input[n] + f(n-2, input, dp);
    int notPick = 0 + f(n-1, input, dp);

    return dp[n] = max(pick, notPick);
}

int main(){
    int n;
    cin >> n;
    vector<int> input(n);
    for(int i=0 ; i<n ; i++){
        cin >> input[i];
    }
    vector<int> dp(n, -1);
    cout << f(n-1, input, dp) << endl;
}

