class Solution {
public:

    int f(int i, int j, vector<vector<int>>& matrix, vector<vector<int>>&dp){
        if(j<0 || j>=matrix.size()) return 1e8;
        if(i==0) return matrix[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int up = matrix[i][j] + f(i-1, j, matrix, dp);
        int rightDiagonal = matrix[i][j] + f(i-1, j+1, matrix, dp);
        int leftDiagonal = matrix[i][j] + f(i-1, j-1, matrix, dp);

        return dp[i][j] = min(rightDiagonal, min(leftDiagonal, up));
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        int ans = 1e8;
        for(int i=0 ; i<n ; i++) ans = min(ans, f(n-1, i, matrix, dp));
        return ans;
    }
};