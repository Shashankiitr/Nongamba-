int minSubsetSumDifference(vector<int>& nums, int n)
{
	// Write your code here.
	int sum = 0;
        for(int i=0 ; i<n ;i++) sum+=nums[i];
        vector<vector<bool>> dp(n, vector<bool>((sum/2)+1, false));
        int k = sum;
        for(int i=0 ; i<n ; i++) dp[i][0] = true;
        if(nums[0]<=k) dp[0][nums[0]] = true;
        for(int i=1 ; i<n ; i++){
            for(int target = 1; target < (k/2) +1 ; target++){
                bool notInclude = dp[i-1][target];
                bool include = false;
                if(target>=nums[i]) include = dp[i-1][target-nums[i]];

                dp[i][target] = (notInclude | include);
            }
		}
        int ans = 1e9;
        for(int i=0 ; i<=sum/2 ; i++){
            if(dp[n-1][i]){
                ans = min(ans, abs(2*i - sum));
            }
        }
		
        return ans;
}
//time complexity: O(n*sum)
//space complexity: O(n*sum)