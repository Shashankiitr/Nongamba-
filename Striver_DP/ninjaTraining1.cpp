int f(int day, int last, vector<vector<int>> &points, vector<vector<int>> &dp){
    if(dp[day][last]!=-1) return dp[day][last];
    //basecase
    if(day==0){
        int maxi = 0;
        for(int i=0 ; i<3 ; i++){
            if(i!=last){
                maxi = max(maxi, points[0][i]);
            }
        }
        return dp[day][last]=maxi;
    }
    int maxi = 0;
    for(int i=0 ; i<3 ; i++){
        if(i!=last){
            maxi = max(points[day][i] +f(day-1, i, points, dp), maxi);
        }
    }
    return dp[day][last]=maxi;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.\
    //vector<vector<int>> dp(n, vector<int>(4, -1));
    vector < vector < int > > dp(n, vector < int > (4, -1));
    return f(n-1, 3, points, dp);
}

//time complexity : O(n)
//space complexity : O(n) + O(n) (for array)