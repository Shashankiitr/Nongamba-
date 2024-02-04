#include <bits/stdc++.h> 

int f(int i, int j1, int j2, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp){
    //bound basecase
    int m = grid[0].size();
    if(j1<0 || j2<0 || j1 >=m || j2 >= m){
        return -1e8;
    }
    //destination basecase
    if(i==grid.size()-1){
        if(j1==j2){
            return grid[i][j1];
        }
        else{
            return grid[i][j1] + grid[i][j2];
        }
    } 

    if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];

    //explore all paths
    int maxi = -1e8;
    for(int dj1=-1 ; dj1<=1 ; dj1++){
        for(int dj2=-1 ; dj2<=1 ; dj2++){
            if(j1==j2){
                maxi = max(maxi, grid[i][j1] + f(i+1, j1+dj1, j2+dj2, grid, dp));
            }
            else{
                maxi = max(maxi, grid[i][j1] + grid[i][j2] + f(i+1, j1+dj1, j2+dj2, grid, dp));
            }
        }
    }
    return dp[i][j1][j2]=maxi;
}

int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    // Write your code here.
    //vector<vector<vector<int>>> matrix3D(xSize,vector<vector<int>>(ySize,vector<int>(zSize, 0)));
    vector<vector<vector<int>>> dp(r, vector<vector<int>>(c, vector<int>(c, -1)));
    return f(0, 0, c-1, grid, dp);
}