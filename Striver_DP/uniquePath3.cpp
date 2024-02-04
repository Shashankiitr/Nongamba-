class Solution {
public:

    int f(int i, int j, vector<vector<int>> &dp){
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==0 || j==0) return 1;
        if(i<0 || j<0) return 0;
        //int up, left = 0;
        int up = f(i-1, j, dp);
        int left = f(i, j-1, dp);

        return dp[i][j]=up+left;
    }

    int uniquePaths(int m, int n) {
        vector<int> prev(n, 0);
            for(int i=0 ; i<m ; i++){
                vector<int> temp(n, 0);
            for(int j=0 ; j<n ; j++){
                if(j==0){
                    temp[j]=1;
                }
                else{
                    temp[j] = prev[j]+temp[j-1];
                    //if(j>0) temp[j]+=temp[j-1];
                }
            }
            prev = temp;
        }
        return prev[n-1];
    }
    
};