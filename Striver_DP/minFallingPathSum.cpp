class Solution {
public:

    int f(int i, int j, vector<vector<int>>& matrix){
        if(j<0 || j>=matrix.size()) return 1e8;
        if(i==0) return matrix[i][j];

        int up = matrix[i][j] + f(i-1, j, matrix);
        int rightDiagonal = matrix[i][j] + f(i-1, j+1, matrix);
        int leftDiagonal = matrix[i][j] + f(i-1, j-1, matrix);

        return min(rightDiagonal, min(leftDiagonal, up));
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int ans = 1e8;
        for(int i=0 ; i<n ; i++) ans = min(ans, f(n-1, i, matrix));
        return ans;
    }
};