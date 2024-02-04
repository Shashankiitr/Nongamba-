class Solution {
public:

    int f(int m, int n, vector<vector<int>>& grid){
        if(m==0 && n==0) return grid[m][n];
        if(m<0 || n<0) return 1000000;

        int left = grid[m][n] + f(m, n-1, grid);
        int up = grid[m][n] + f(m-1, n, grid);

        return min(up, left);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        return f(m-1, n-1, grid);
    }
};