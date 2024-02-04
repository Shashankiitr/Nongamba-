class Solution {
public:

    int f(int i, int j, vector<vector<int>> &dp){
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==0 || j==0) return 1;
        if(i<0 || j<0) return 0;
        int up, left = 0;
        if(i-1>=0) up = f(i-1, j, dp);
        if(j-1>=0) left = f(i, j-1, dp);

        return dp[i][j]=up+left;
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return f(m-1, n-1, dp);
    }
};