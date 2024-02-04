#include <bits/stdc++.h> 

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<vector<bool>> dp(n, vector<bool>(k+1, false));
    //return f(n-1, k, arr, dp);
    //basecase for tabulation
    for(int i=0 ; i<n ; i++) dp[i][0] = true;
    dp[0][arr[0]] = true;

    //nested loop for all
    for(int i=1 ; i<n ; i++){
        for(int target = 1; target < k+1 ; target++){
            bool notInclude = dp[i-1][target];
            bool include = false;
            if(target>=arr[i]) include = dp[i-1][target-arr[i]];

            dp[i][target] = (notInclude || include);
        }
    }
    return dp[n-1][k];
}