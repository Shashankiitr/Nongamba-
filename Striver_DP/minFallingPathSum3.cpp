class Solution {
public:

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int ans = 1e8;
        vector<int> prev(n, 0);
        vector<int> current(n, 0);
        for(int i=0 ; i<n ; i++) prev[i] = matrix[0][i];
        for(int i=1 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                int down = matrix[i][j] + prev[j];
                
                int rightDiagonal = matrix[i][j];
                if(j-1>=0) rightDiagonal+=prev[j-1];
                else rightDiagonal+=1e8;

                int leftDiagonal = matrix[i][j];
                if(j+1<n) leftDiagonal+=prev[j+1];
                else leftDiagonal+=1e8;

                current[j]=min(rightDiagonal, min(leftDiagonal, down));
            }
            prev = current;
        }      
        for(int j=0 ; j<n ; j++) ans = min(ans, prev[j]);
        return ans;
    }
};