class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> prev(n, 0);
        //return f(m-1, n-1, grid, dp);
        for(int i=0 ; i<m ; i++){
            vector<int> temp(n, 0);
            for(int j=0 ; j<n ; j++){
                if(i==0 && j==0){
                    temp[j] = grid[i][i];
                } 
                //else if(i<0 || j<0){
                //    dp[i][j] = 1000000;
                //}  
                else{
                    int up = grid[i][j];
                    if(i>0) up += prev[j];
                    else up += 1e9;
                
                    int left = grid[i][j];
                    if(j>0) left+=temp[j-1];
                    else left += 1e9;

                    temp[j] = min(left, up);
                }
            }
            prev = temp;
        }
        return prev[n-1];
    }
};