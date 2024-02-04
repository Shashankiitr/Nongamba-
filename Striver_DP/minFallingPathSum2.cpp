class Solution {
public:

    int f(int i, int j, vector<vector<int>>& matrix, vector<vector<int>>&dp){
        if(j<0 || j>=matrix.size()) return 1e8;
        if(i==0) return matrix[i][j];

        if(dp[i][j]!=-1) return dp[i][j];

        int up = matrix[i][j] + f(i-1, j, matrix, dp);
        int rightDiagonal = matrix[i][j] + f(i-1, j+1, matrix, dp);
        int leftDiagonal = matrix[i][j] + f(i-1, j-1, matrix, dp);

        return dp[i][j]=min(rightDiagonal, min(leftDiagonal, up));
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int ans = 1e8;
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for(int i=0 ; i<n ; i++) dp[0][i] = matrix[0][i];
               for(int i=1 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                int up = matrix[i][j] + dp[i-1][j];
                
                int rightDiagonal = matrix[i][j];
                if(j-1>=0) rightDiagonal+=dp[i-1][j-1];
                else rightDiagonal+=1e8;

                int leftDiagonal = matrix[i][j];
                if(j+1<n) leftDiagonal+=dp[i-1][j+1];
                else leftDiagonal+=1e8;

                dp[i][j]=min(rightDiagonal, min(leftDiagonal, up));
            }
        }      
        for(int j=0 ; j<n ; j++) ans = min(ans, dp[n-1][j]);
        return ans;
    }
};