class Solution {
public:

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> front(n, 0), current(n, 0);

        for(int j=0 ; j<n ; j++){
            front[j] = triangle[n-1][j];
        }

        for(int i = n-2 ; i>=0 ; i--){
            for(int j=0 ; j<=i ; j++){
                if(i==triangle.size()-1){
                    current[j]=triangle[i][j];
                }
                else{
                    int down = triangle[i][j] + front[j];
                    int diagonal = triangle[i][j] +front[j+1];
                    current[j]=min(down, diagonal);
                }
            }
            front = current;
        }
        return front[0];
    }
};