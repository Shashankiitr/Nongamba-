int f(int day, int last, vector<vector<int>> &points){
    //basecase
    if(day==0){
        int maxi = 0;
        for(int i=0 ; i<3 ; i++){
            if(i!=last){
                maxi = max(maxi, points[0][i]);
            }
        }
        return maxi;
    }

    int point = 0;
    for(int i=0 ; i<3 ; i++){
        if(i!=last){
            point = max(points[day][i] +f(day-1, i, points), point);
        }
    }
    return point;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    return f(n-1, 3, points);
}

//time complexity : O(3^n)
//space complexity : O(n) + O(n) (for array)