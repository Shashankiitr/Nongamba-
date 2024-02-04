#include <bits/stdc++.h> 

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    //vector<vector<bool>> dp(n, vector<bool>(k+1, false));
    //return f(n-1, k, arr, dp);
    //basecase for tabulation
    vector<bool> previous(k+1, false), current(k+1, false);
    //for(int i=0 ; i<n ; i++) dp[i][0] = true;
    previous[0] = current[0] = true;
    previous[arr[0]] = true;
    for(int i=1 ; i<n ; i++){
    for(int target = 1; target < k+1 ; target++){
        bool notInclude = previous[target];
        bool include = false;
        if(target>=arr[i]) include = previous[target-arr[i]];

        current[target] = (notInclude | include);
    }
    previous = current;
    }
    return previous[k];
}